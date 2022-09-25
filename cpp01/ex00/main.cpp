/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:18:56 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/26 00:47:56 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string fnindex;
    std::string name;

    while (1)
    {
        Zombie *z;
        std::cout<<"choose a function (newZombie() : 1, randomChump() : 2 "<<std::endl;
       	getline(std::cin, fnindex);
        if (fnindex[0] == '1')
        {
            std::cout<<"enter a name"<<std::endl;
       	    getline(std::cin, name);
            z = newZombie(name);
            
        }
        else if (fnindex[0] == '2')
        {
            std::cout<<"enter a name"<<std::endl;
       	    getline(std::cin, name);
            randomChump(name);
        }
    }
    
    
    return (0);
}