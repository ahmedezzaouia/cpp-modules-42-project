/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:19:12 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 23:14:42 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
    void announce(void);
    Zombie(std::string str);
    ~Zombie(void);

    private:
        std::string name;
};
void randomChump(std::string name);
Zombie  *newZombie( std::string name );

#endif