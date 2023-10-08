#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "No_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;

	this->ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "[" << this->_name << "]" << " Evolved into a DIAMOND TRAP. かかってこいよ" << std::endl;
}

DiamondTrap::DiamondTrap(const string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;

	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "[" << this->_name << "]" << " Evolved into a DIAMOND TRAP. かかってこいよ" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond) : ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond){
	std::cout << "[" <<_name << "]" << " Copied new Diamond Trap. 行くぞ" << std::endl;
	*this = diamond;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[" <<_name << "]" << " has lost his perfect shine. F." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond) {
	if (this != &diamond) {
		this->_name = diamond._name;
		this->_hitPoints = diamond._hitPoints;
		this->_energyPoints = diamond._energyPoints;
		this->_damage = diamond._damage;
	}
	return *this;
}

void DiamondTrap::attack(const string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "[" << this->_name << "]" << " At birth I was named " << ClapTrap::_name << ", but now I have become " << this->_name << std::endl;
}
