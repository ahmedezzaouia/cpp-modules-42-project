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

bool	Fixed::operator==(Fixed const &f) const
{
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(Fixed const &f) const
{
	return (this->getRawBits() != f.getRawBits());
}

bool	Fixed::operator>(Fixed const &f) const 
{
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(Fixed const &f) const
{
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator>=(Fixed const &f) const
{
	return (this->getRawBits() >= f.getRawBits());
}


bool	Fixed::operator<=(Fixed const &f) const
{
	return (this->getRawBits() <= f.getRawBits());
}



Fixed	&Fixed::operator++(void)
{
	this->fixed_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old(*this);
	this->fixed_value++;
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->fixed_value--;
	return (*this);
}


Fixed	Fixed::operator--(int)
{
    Fixed old(*this);
	this->fixed_value--;
	return (old);
}

Fixed Fixed::operator+(Fixed const &f) const
{
    Fixed res(this->toFloat() + f.toFloat());
	return (res);
}

Fixed Fixed::operator-(Fixed const &f) const
{
	Fixed res(this->toFloat() - f.toFloat());
    return (res);
}

Fixed Fixed::operator*(Fixed const &f) const
{
    Fixed res(this->toFloat() * f.toFloat());
    return (res);
}

Fixed Fixed::operator/(Fixed const &f) const
{
    Fixed res(this->toFloat() / f.toFloat());
    return (res);
}


Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

const Fixed		&Fixed::min(const Fixed &f1, const Fixed &f2 )
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}


const Fixed&    Fixed::max( const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
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
