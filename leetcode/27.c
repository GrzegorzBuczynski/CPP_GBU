
#include <stdio.h>

void	print_array(int *nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}

// int	removeElement(int *nums, int numsSize, int val)
// {
// 	int	i;
//     int temp;

// 	i = 0;
// 	while (i < numsSize)
// 	{
// 		if (nums[i] == val && numsSize > i)
// 		{
// 			while (numsSize > 0 && nums[numsSize - 1] == val)
// 				numsSize--;
// 			nums[i] = nums[numsSize - 1];
//             temp = nums[i];
// 			nums[numsSize - 1] = val;
//             temp = nums[numsSize - 1];
//             print_array(nums, numsSize);
// 		    numsSize--;
// 		}
// 		i++;
// 	}
// 	return (i);
// }

int	removeElement(int *nums, int numsSize, int val)
{
	int	i;
    int k;

	i = 0;
    if (numsSize == 1 && nums[0] == val)
        return 0;
    if (numsSize == 1 && nums[0] != val)
        return 1;
	while (i < numsSize)
	{
        if (nums[i] != val)
            k++;
		if (nums[i] == val && numsSize > i)
		{
			while (numsSize > 0 && nums[numsSize - 1] == val)
				numsSize--;
			nums[i] = nums[numsSize - 1];
			nums[numsSize - 1] = val;
		    numsSize--;
		}
		i++;
	}
	return (i);
}


int	main(void)
{
	int nums[] = {0,1,2,2,3,0,4,2};
	int numsSize = 8;
	int val = 2;
	int i = 0;



	print_array(nums, numsSize);
	i = removeElement(nums, numsSize, val);
	printf("i = %d\n", i);
	print_array(nums, i);
	printf("\n");
	return (0);
}