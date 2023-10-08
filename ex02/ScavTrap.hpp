#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const string& name);
	ScavTrap(const ScavTrap& scav);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scav);

	void attack(const string& target);
	void guardGate();
};


#endif
