#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string nm);
        ScavTrap(const ScavTrap &);
	    ScavTrap&   operator=(const ScavTrap& rhs);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif