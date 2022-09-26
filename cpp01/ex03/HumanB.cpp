#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
    this->name = name;
    this->weapon = nullptr;
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void )
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType()<< std::endl;
	}
	else
	{
		std::cout << this->name<< " can't attack >> human don't have a weapon" << std::endl;
	}
}

Weapon&	HumanB::getWeapon( void )
{
	return (*(this->weapon));
}

void	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
	{
		std::cout << "the new weapon can't be nothing" << std::endl;
		exit (1);
	}
	this->weapon = &newWeapon;
}