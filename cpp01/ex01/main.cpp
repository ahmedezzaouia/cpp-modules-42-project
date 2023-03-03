/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:18:56 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 17:47:15 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->setName(name);
    return (zombie);
}

int main()
{
    Zombie *z;
    int i;
    
    i = 0;
    z = zombieHorde(5, "AHMED");
    while (i < 5)
    {
        z[i].announce();
        i++;
    }

    delete [] z;
    return (0);
}