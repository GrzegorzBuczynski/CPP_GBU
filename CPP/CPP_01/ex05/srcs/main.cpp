/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:36:57 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/03 20:57:12 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl harl;
	std::string level;

	while (true)
	{
		std::cout << "Enter complaint level (DEBUG, INFO, WARNING,";
		std::cout << " ERROR) or 'end' to quit: ";
		if (!std::getline(std::cin, level))
		{
			std::cout << std::endl;
			break ;
		}
		if (level == "end")
		{
			break ;
		}

		harl.complain(level);
	}
	return (0);
}
