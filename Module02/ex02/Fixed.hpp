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
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
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