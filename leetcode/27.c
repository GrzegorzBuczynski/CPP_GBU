
#include <stdio.h>

void	print_array(int *nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}

int	removeElement(int *nums, int numsSize, int val)
{
	int	i;

	i = 0;
    if (numsSize == 1 && nums[0] == val)
        return 0;
	while (i < numsSize)
	{
		if (nums[i] == val && numsSize > i)
		{
			while (numsSize > 0 && nums[numsSize - 1] == val && numsSize > i + 1)
				numsSize--;
			nums[i] = nums[numsSize - 1];
			nums[numsSize - 1] = val;
		    numsSize--;
		}
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		if (nums[i] == val)
			break ;
		i++;
	}
	return (i);
}


int	main(void)
{
	int nums[] = {3,3};
	int numsSize = 2;
	int val = 3;
	int i = 0;



	print_array(nums, numsSize);
	i = removeElement(nums, numsSize, val);
	printf("i = %d\n", i);
	print_array(nums, i);
	printf("\n");
	return (0);
}