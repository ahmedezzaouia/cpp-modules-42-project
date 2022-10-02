#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout <<"FragTrap " <<this->name<< " Default Constructor Clalled" << std::endl;
    this->name = "default";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
    this->attackDamage = 30;

}

FragTrap::~FragTrap() {
	std::cout<< "FragTrap destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout <<"FragTrap " <<this->name<<" Constructor Clalled" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
    *this = rhs;
    std::cout << "FragTrap " << this->name << " copied with copy constuctor." << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& rhs) {
    std::cout << "FragTrap " << this->name << " copied with copy assignment operator." << std::endl;
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return *this;
}

std::ostream &operator<<( std::ostream &out, FragTrap const &scav)
{
	out << "FragTrap " << scav.getName();
	return out;
}


void FragTrap::highFivesGuys() {

    if (this->energyPoints == 0)
		std::cout<< "FragTrap " << this->name << " can't hight fives due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "FragTrap " << this->name << " can't hight fives due to no hit points left"<< std::endl;
    else 
	   	std::cout << this->name << " FragTrap hight fives guys!!!" << std::endl;
}


void		FragTrap::attack(std::string const &target )
{
    if (this->energyPoints == 0)
		std::cout<< "FragTrap " << this->name << " can't attack " << target << " due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "FragTrap " << this->name << " can't attack " << target << " due to no hit points left"<< std::endl;
    else 
	{
	    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}
