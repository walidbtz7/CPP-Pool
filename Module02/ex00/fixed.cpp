#include "Fixed.hpp"

const int    Fixed::_bits = 8;

Fixed::Fixed(): _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    _RawBits = other.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

 Fixed& Fixed::operator=(const Fixed& other) 
 {

    std::cout << "Copy assignment operator called" << std::endl;

    _RawBits = other.getRawBits();

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