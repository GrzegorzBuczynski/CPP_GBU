

#include "Fixed.hpp"
# include <iostream>


Fixed::Fixed() : _fixedPointValue(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // Output a message indicating the copy assignment operator is called
    std::cout << "Copy assignment operator called" << std::endl;
    
    // Check for self-assignment
    if (this != &other)
        // Copy the value from the other object
        this->_fixedPointValue = other.getRawBits();
    // Return the current object
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}
