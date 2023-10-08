#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
	ScavTrap();
	ScavTrap(const string& name);
	ScavTrap(const ScavTrap& scav);
	virtual ~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scav);

	virtual void attack(const string& target);
	void guardGate();
};


#endif
