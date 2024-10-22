#ifndef Fixed_HPP
#define Fixed_HPP
#include <iostream>


class Fixed {
    public:
        Fixed ();
        Fixed(const Fixed& src);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int _RawBits;
        static const int    _bits;
};
#endif