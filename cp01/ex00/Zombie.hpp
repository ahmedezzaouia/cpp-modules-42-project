/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:19:12 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/25 23:03:05 by ahmez-za         ###   ########.fr       */
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
    Zombie(void);
    ~Zombie(void);

    private:
        std::string name;
};
void randomChump(std::string name);
Zombie  *newZombie( std::string name );

#endif