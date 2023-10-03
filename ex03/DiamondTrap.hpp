#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	string _name;
public:
	DiamondTrap(const string& name);
	DiamondTrap(const DiamondTrap& diamond);
	~DiamondTrap();

	using   ScavTrap::attack;
	DiamondTrap& operator=(const DiamondTrap& diamond);
	void whoAmI();
};


#endif
