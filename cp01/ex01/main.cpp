/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:18:56 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/26 00:29:54 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *z;
    z = newZombie(name);
    z->announce();
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

    while (i < 5)
        free(z + i++);
    free(z);
    return (0);
}