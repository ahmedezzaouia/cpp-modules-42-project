
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed(Fixed &fixedcopy );
	~Fixed( void );
	Fixed& operator =(Fixed &foper);
	int		getRawBits( void ) const;
	void	setRawBits( const int raw );
private:
	static const int	fractional_bits = 8;
	int					fixed_value;

};

#endif
