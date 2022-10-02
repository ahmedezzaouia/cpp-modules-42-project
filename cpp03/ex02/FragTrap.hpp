#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
        FragTrap(const FragTrap &scav);
	    FragTrap&   operator=(const FragTrap& rhs);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys();
};

#endif