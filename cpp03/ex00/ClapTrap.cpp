/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 01:48:33 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/10/01 02:44:14 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name):name(name),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << this->name << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(void):name("default"),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << this->name << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << "ClapTrap destroyed" << std::endl;
}

std::ostream &operator<<( std::ostream & ostr, ClapTrap const &clap)
{
	ostr << "ClapTrap " << clap.getName();
	return ostr;
}

std::string	&ClapTrap::getName(void) 
{
	return this->name;
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

void		ClapTrap::attack(std::string const &target )
{
    if (this->energyPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't attack " << target << "due to no energy points left"<< std::endl;
	else if (this->hitPoints == 0)
		std::cout<< "ClapTrap " << this->name << " can't attack " << target << "due to no hit points left"<< std::endl;
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
        if (amount > this->hitPoints)
            amount = this->hitPoints;
        this->hitPoints -= amount;
        std::cout <<  "ClapTrap " << this->name << " has taken " << amount << " damage" << std::endl;
    }
}
