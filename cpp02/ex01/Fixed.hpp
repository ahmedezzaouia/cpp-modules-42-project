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
	float toFloat(void) const;
	int toInt(void) const;

  	int getRawBits() const;
  	void setRawBits(int const raw);
	
  private :
  	static const int fractional_bits = 8;
  	int fixed_value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif 