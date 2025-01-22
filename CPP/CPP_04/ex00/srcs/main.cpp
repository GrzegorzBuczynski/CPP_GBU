/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:16:21 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:16:22 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main() 
{
    // Create instances of Animal, Dog, and Cat
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Display the types of Dog and Cat
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    // Call makeSound() methods
    j->makeSound(); // will output the dog sound!
    i->makeSound(); // will output the cat sound!
    meta->makeSound(); // will output the animal sound!

    // Clean up
    delete meta;
    delete j;
    delete i;

    // Create instances of WrongAnimal and WrongCat
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    // Call makeSound() methods
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound(); // will output the WrongAnimal sound!

    // Clean up
    delete wrongMeta;
    delete wrongI;

    return 0;
}
