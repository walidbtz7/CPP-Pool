#ifndef Fixed_HPP
#define Fixed_HPP
#include <iostream>
#include <cmath>


class Fixed {
    public:
        Fixed ();
        Fixed(const Fixed& src);
        Fixed(const float fixed);
        Fixed(const int fixed);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int _RawBits;
        static const int    _bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif