/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:19:44 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/23 16:33:13 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

int main() 
{
    // Create a Materia source
    IMateriaSource* src = new MateriaSource();

    // Learn Ice and Cure Materia
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Create a character named "me"
    ICharacter* me = new Character("me");

    // Create and equip Ice Materia
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    // Create and equip Cure Materia
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // Create another character named "bob"
    ICharacter* bob = new Character("bob");

    // Use the equipped Materia on "bob"
    me->use(0, *bob);   // Uses Ice Materia
    me->use(1, *bob);   // Uses Cure Materia

    // Clean up
    delete bob;
    delete me;
    delete src;

    return 0;
}
