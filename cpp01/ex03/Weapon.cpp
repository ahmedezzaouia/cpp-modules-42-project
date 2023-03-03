#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

Weapon::~Weapon( void )
{
}

const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void		Weapon::setType(std::string type )
{
	if (type == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
	}
	this->type = type;
}