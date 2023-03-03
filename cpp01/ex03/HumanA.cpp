#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;

}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType()<< std::endl;
}

Weapon&	HumanA::getWeapon( void )
{
	return (this->weapon);
}
