#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class Fixed
{

  public :
  
  	Fixed (); 
  	Fixed(const int value); 
  	Fixed(const float value);
	Fixed(const Fixed &c); 
	~Fixed();

	Fixed& operator=(const Fixed &cop);
	bool	operator==(Fixed const &f) const;
	bool	operator!=(Fixed const &f) const;
	bool	operator>(Fixed const &f) const;
	bool	operator>=(Fixed const &f) const;
	bool	operator<(Fixed const &f) const;
	bool	operator<=(Fixed const &f) const;
	Fixed	operator+(Fixed const &f) const;
	Fixed	operator-(Fixed const &f) const;
	Fixed	operator*(Fixed const &f) const;
	Fixed	operator/(Fixed const &f) const;
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	float toFloat(void) const;
	int toInt(void) const;
  	int getRawBits() const;
  	void setRawBits(int const raw);

	static Fixed 	&min(Fixed &f1, Fixed &f2);
	static Fixed 	&max(Fixed &f1, Fixed &f2);
	static const Fixed 	&max(Fixed const &f1, Fixed const &f2);
	static const Fixed 	&min(Fixed const &f1, Fixed const &f2);

  private :
  	static const int fractional_bits = 8;
  	int fixed_value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif 