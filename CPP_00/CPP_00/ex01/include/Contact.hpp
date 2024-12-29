/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:50:10 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/29 18:00:49 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   CONTACT_HPP
# define  CONTACT_HPP

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        void    setFirstName(const std::string &firstName);
        void    setLastName(const std::string &lastName);
        void    setNickname(const std::string &nickname);
        void    setPhoneNumber(const std::string &phoneNumber);
        void    setDarkestSecret(const std::string &darkestSecret);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
};



# endif