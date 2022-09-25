/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:11:52 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/26 00:25:15 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zbms;
    int i;
    
    i = 0;
    zbms = (Zombie *)malloc(sizeof(Zombie *) * N);
    while (i < N)
        zbms[i++].setName(name);
    
    return (zbms);
}