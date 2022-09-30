#include "Fixed.hpp"

Fixed::Fixed( void ):fixed_value(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed( void )
{
    std::cout<<"Destructor called"<<std::endl;

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
    std::cout<<"getRawBits member function called"<<std::endl;
	return (this->fixed_value);
}

void	Fixed::setRawBits(const int raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
	this->fixed_value = raw;
}


