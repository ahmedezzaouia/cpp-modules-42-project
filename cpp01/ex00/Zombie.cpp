/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:50:33 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 17:45:28 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl <<std::endl;
}

Zombie::Zombie(std::string str)
{
    name = str;
}

Zombie::~Zombie()
{
    std::cout << name << "has been destroyed" <<std::endl;
}
