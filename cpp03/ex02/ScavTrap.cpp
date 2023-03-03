
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout <<"ScavTrap " <<this->name<< " Default Constructor Clalled" << std::endl;
    this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->hitPoints = 20;
}


ScavTrap::ScavTrap(std::string name) {
	std::cout <<"ScavTrap " <<this->name<<" Constructor Clalled" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->hitPoints = 20;
}

ScavTrap::~ScavTrap() {
	std::cout<< "ScavTrap destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
    *this = rhs;
    std::cout << "ScavTrap " << this->name << " copied with copy constuctor." << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs) {
    std::cout << "ScavTrap " << this->name << " copied with copy assignment operator." << std::endl;
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return *this;
}

std::ostream &operator<<( std::ostream &out, ScavTrap const &scav)
{
	out << "ScavTrap " << scav.getName();
	return out;
}


void ScavTrap::guardGate() {

    if (this->energyPoints == 0)
		std::cout<< "ScavTrap " << this->name << " can't guard due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ScavTrap " << this->name << " can't guard due to no hit points left"<< std::endl;
    else 
	   	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode."<< std::endl;
}


void		ScavTrap::attack(std::string const &target )
{
    if (this->energyPoints == 0)
		std::cout<< "ScavTrap " << this->name << " can't attack " << target << " due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ScavTrap " << this->name << " can't attack " << target << " due to no hit points left"<< std::endl;
    else 
	{
	    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}
