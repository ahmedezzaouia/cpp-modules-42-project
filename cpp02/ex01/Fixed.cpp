#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):fixed_value(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->setRawBits(value << this->fractional_bits);
}

Fixed::Fixed(const float value)
{
    (void)value;
    std::cout<<"Float constructor called"<<std::endl;
    this->setRawBits((int)roundf(value * (1 << this->fractional_bits)));
    
}

Fixed::~Fixed(void)
{
    std::cout<<"Destructor called"<<std::endl;
}


int		Fixed::toInt(void) const
{
    return (this->fixed_value >> this->fractional_bits);
}



float	Fixed::toFloat(void) const
{   
    return ((float) this->fixed_value / (1 << this->fractional_bits));
}


Fixed& Fixed::operator=(const Fixed &foper)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &foper)
		this->fixed_value = foper.getRawBits();
    return (*this);
}


int	Fixed::getRawBits(void) const
{
    std::cout<< "getRawBits member function called"<<std::endl;
	return (this->fixed_value);
}


void	Fixed::setRawBits(const int raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
	this->fixed_value = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
