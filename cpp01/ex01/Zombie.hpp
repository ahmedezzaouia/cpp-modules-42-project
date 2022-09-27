/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:19:12 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 17:50:05 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
    void announce(void);
    void setName(std::string str);
    std::string getName(void);
    Zombie(std::string name);
    Zombie();
    ~Zombie(void);

    private:
        std::string name;
};
void randomChump(std::string name);
Zombie* newZombie( std::string name );
Zombie* zombieHorde(int N, std::string name);

#endif