

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:
        int _fixedPointValue;
        static const int fractionalBits = 8;
    public:
        Fixed();
        // Fixed(); // Default constructor
        Fixed(const Fixed &fixed); // Copy constructor
        Fixed &operator=(const Fixed &other); // Copy assignment operator
        ~Fixed(); // Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);        
};

#endif
