

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int value); // Integer constructor
        Fixed(const float value); // Float constructor
        Fixed(const Fixed &other); // Copy constructor
        Fixed &operator=(const Fixed &other); // Copy assignment operator
        ~Fixed(); // Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
