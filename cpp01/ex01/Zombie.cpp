/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:50:33 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 17:49:49 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl <<std::endl;
}

Zombie::Zombie()
{
    // std::cout << name << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name= name;
    // std::cout << name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << std::endl;
}


void    Zombie::setName(std::string str)
{
    name = str;
}

std::string Zombie::getName()
{
    return (name);
}