#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	string _name;
public:
	DiamondTrap();
	DiamondTrap(const string& name);
	DiamondTrap(const DiamondTrap& diamond);
	~DiamondTrap();

	void attack(const string& target);
	DiamondTrap& operator=(const DiamondTrap& diamond);
	void whoAmI();
};


#endif
