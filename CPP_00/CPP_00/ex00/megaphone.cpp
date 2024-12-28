/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:20:21 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/18 17:49:04 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int ac, char **argv)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
            for (int j = 0; argv[i][j] != '\0'; j++)
                std::cout << static_cast<char>(std::toupper(argv[i][j]));
        std::cout << std::endl;
    }
    return (0);
}
