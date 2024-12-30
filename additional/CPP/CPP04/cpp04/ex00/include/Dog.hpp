/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:58:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/09 17:26:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

/**
 * @class Dog
 * @brief A class representing a dog, derived from Animal.
 * 
 * The Dog class inherits from the Animal class and provides specific
 * implementations for the dog's behavior, such as making a sound.
 */
class Dog : public Animal 
{
    public:
        Dog();                              ////< Default constructor 
        Dog(const Dog& other);              ////< Copy constructor
        Dog& operator=(const Dog& other);   ////< Assignment operator
        ~Dog();                             ////< Destructor     
        
        void makeSound() const;
};

#endif