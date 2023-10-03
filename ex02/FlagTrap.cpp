#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;

	std::cout << "[" << this->_name << "]" << " Evolved into a Flag Trap. What does this mean?" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& scav) : ClapTrap(scav) {
	std::cout << "[" <<_name << "]" << " Copied new Flag Trap. What does this mean" << std::endl;
	*this = scav;
}

FlagTrap::~FlagTrap() {
	std::cout << "[" <<_name << "]" << " Degraded back into a Clap Trap. What a pity." << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap& scav) {
	if (this != &scav) {
		this->_name = scav._name;
		this->_hitPoints = scav._hitPoints;
		this->_energyPoints = scav._energyPoints;
		this->_damage = scav._damage;
	}
	return *this;
}

void FlagTrap::highFivesGuys() {
	std::cout << "[" << this->_name << "]" << " give a high five. Yeeeaa!" << std::endl;
}