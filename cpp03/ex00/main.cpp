/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 02:44:17 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/10/01 02:55:55 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


int main ()
{
    ClapTrap ahmed("ahmed");
    ClapTrap amine("amine");


    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
 
    
    ahmed.beRepaired(3);

    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
    ahmed.attack("amine");
}