#include "Fixed.hpp"

const int    Fixed::_bits = 8;

Fixed::Fixed(): _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    _RawBits = other._RawBits;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const float fixed)
{
    _RawBits = roundf(fixed * (1  << _bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int fixed)
{
    _RawBits = fixed << _bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) 
{

    _RawBits = other._RawBits;

    std::cout << "Copy assignment operator called" << std::endl;

    return *this;
}


 int Fixed::getRawBits( void ) const
 {
    std::cout << "getRawBits member function called" << std::endl;
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