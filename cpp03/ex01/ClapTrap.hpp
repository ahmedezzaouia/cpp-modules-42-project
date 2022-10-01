#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

public:
	ClapTrap(const std::string name);
	ClapTrap( void );
	ClapTrap(const ClapTrap &);
	ClapTrap&       operator=(const ClapTrap& rhs);
	~ClapTrap( void );
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	std::string	getName(void) const;


};

std::ostream	&operator<<( std::ostream &ostream, const ClapTrap &myClass );

#endif

