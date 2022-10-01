/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 01:48:33 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/10/01 23:18:14 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name):name(name),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << this->name << " ClapTrap Name Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(void):name("default"),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << this->name << " ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap " << this->name << " copied with copy constuctor." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " ClapTrap destroyed" << std::endl;
}

std::ostream &operator<<( std::ostream &out, ClapTrap const &clap)
{
	out << "ClapTrap " << clap.getName();
	return out;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& rhs) {
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    std::cout << "ClapTrap " << this->name << " copied with copy assignment operator." << std::endl;
    return *this;
}


std::string	ClapTrap::getName(void) const
{
	return this->name;
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

void		ClapTrap::attack(std::string const &target )
{
    if (this->energyPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't attack " << target << " due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't attack " << target << " due to no hit points left"<< std::endl;
    else 
	{
	    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't a be repaired due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't a be repaired due to no hit points left"<< std::endl;
    else if (this->hitPoints + amount > 10)
        std::cout << "ClapTrap " << this->name << " can't repaired ==> it have more than 10 hit points." << std::endl;
    else 
    {
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " is repaired with" << amount << "he now have " << this->hitPoints << "hit points." << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't takeDamage due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't takeDamage due to no hit points left"<< std::endl;
    else
    {
        if ((amount > (unsigned int)this->hitPoints))
            amount = this->hitPoints;
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage" << std::endl;
    }
}
