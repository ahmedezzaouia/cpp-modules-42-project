

#ifndef HUMANB_HPP
#define HUMANB_APP


#include "Weapon.hpp"

class HumanB
{

    public:
        HumanB( std::string name );
        ~HumanB( void );
        void	attack( void );
        void	setWeapon( Weapon& newWeapon );
        Weapon&	getWeapon( void );

    private:
        std::string	name;
        Weapon		*weapon;

};

#endif