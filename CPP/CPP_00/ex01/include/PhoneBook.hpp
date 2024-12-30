/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:45:53 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/29 16:31:07 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>

class PhoneBook 
{
	private:
		Contact contacts[8];
		int currentIndex; 
		int totalContacts;
	public:
		PhoneBook();
		void addContact(const Contact &contact);
		void searchContacts() const;
		void displayContact(int index) const;
};
#endif
