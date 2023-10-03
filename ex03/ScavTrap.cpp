#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;

	std::cout << "[" << this->_name << "]" << " Evolved into a Scav Trap. Fear, mortal!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap(scav) {
	std::cout << "[" <<_name << "]" << " Copied new Scav Trap. Fear, mortal!" << std::endl;
	*this = scav;
}

ScavTrap::~ScavTrap() {
	std::cout << "[" <<_name << "]" << " Degraded from Scav back into a Clap Trap. What a pity." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav) {
	if (this != &scav) {
		this->_name = scav._name;
		this->_hitPoints = scav._hitPoints;
		this->_energyPoints = scav._energyPoints;
		this->_damage = scav._damage;
	}
	return *this;
}

void ScavTrap::attack(const string &target) {
	if (!status("attack"))
		return;
	std::cout << "[" <<_name << "]" << " hits " << target << " with all his might, causing " << _damage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate() {
	std::cout << "[" <<_name << "]" << " goes into GUARD GATE mode!" << std::endl;
}