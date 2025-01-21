# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


int main() 
{
    const Animal* animals[10];

    for (int i = 0; i < 5; ++i) 
        animals[i] = new Dog();
    
    for (int i = 5; i < 10; ++i) 
        animals[i] = new Cat();

    for (int i = 0; i < 10; ++i) 
        delete animals[i];

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; 
    delete i;

    //Deep copy test
    Dog originalDog;
    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    Cat originalCat;
    Cat copiedCat = originalCat;
    copiedCat.makeSound();

    return 0;
}
