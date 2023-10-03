#include "FragTrap.hpp"

FragTrap::FragTrap(const string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;

	std::cout << "[" << this->_name << "]" << " Evolved into a Frag Trap. What does this mean?" << std::endl;
}

FragTrap::FragTrap(const FragTrap& scav) : ClapTrap(scav) {
	std::cout << "[" <<_name << "]" << " Copied new Frag Trap. What does this mean" << std::endl;
	*this = scav;
}

FragTrap::~FragTrap() {
	std::cout << "[" <<_name << "]" << " Degraded from Frag back into a Clap Trap. What a pity." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& scav) {
	if (this != &scav) {
		this->_name = scav._name;
		this->_hitPoints = scav._hitPoints;
		this->_energyPoints = scav._energyPoints;
		this->_damage = scav._damage;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "[" << this->_name << "]" << " give a high five. Yeeeaa!" << std::endl;
}