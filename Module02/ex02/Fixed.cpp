#include "Fixed.hpp"

const int    Fixed::_bits = 8;

Fixed::Fixed(): _RawBits(0)
{
}

Fixed::Fixed(const Fixed& other)
{
    _RawBits = other._RawBits;
}

Fixed::Fixed(const float fixed)
{
    _RawBits = roundf(fixed * (1  << _bits));
}

Fixed::Fixed(const int fixed)
{
    _RawBits = fixed << _bits;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other) 
{

    _RawBits = other._RawBits;

    return *this;
}


 int Fixed::getRawBits( void ) const
 {
    return _RawBits;
 }

void Fixed::setRawBits( int const raw )
{
    this->_RawBits = raw;
}

float Fixed::toFloat( void ) const
{
    return (float) _RawBits / (1 << _bits );
}


int Fixed::toInt( void ) const
{
    return (_RawBits >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed f;
    f._RawBits = this->_RawBits + other._RawBits;
    return (f);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed f;
    f._RawBits = this->_RawBits - other._RawBits;
    return (f);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed f;

    f._RawBits = this->_RawBits * (other.toInt());

    return (f);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    int var;

    var = this->_RawBits / other._RawBits;
    return (Fixed(var));
}

bool Fixed::operator>(const Fixed& other) const
{
    if(_RawBits > other._RawBits)
        return (true);
    else
        return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
    if(_RawBits < other._RawBits)
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
    if(_RawBits >= other._RawBits)
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
    if(_RawBits <= other._RawBits)
        return (true);
    else
        return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
    if(_RawBits == other._RawBits)
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
    if(_RawBits != other._RawBits)
        return (true);
    else
        return (false);
}

Fixed& Fixed::operator++()
{
    _RawBits++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed f(*this);
    _RawBits++;
    return (f);
}

Fixed& Fixed::operator--()
{
    _RawBits--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed f(*this);
    _RawBits--;
    return (f);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return ((a._RawBits < b._RawBits) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return ((a._RawBits < b._RawBits) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return ((a._RawBits > b._RawBits) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return ((a._RawBits > b._RawBits) ? a : b);
}
