#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string& name) : _hitPoints(10), _energyPoints(10), _damage(0) {
	_name = name;
	std::cout << "Initialized new Clap Trap. " << "[" <<_name << "]" << " ready for fight." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& trap) {
	_name = trap._name;
	_hitPoints = trap._hitPoints;
	_energyPoints = trap._energyPoints;
	_damage = trap._damage;
	std::cout << "Copied new Clap Trap. " << "[" <<_name << "]" << " ready for fight." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "[" <<_name << "] " << "The self-destruction script has been launched. Bye, World!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
	if (this != &trap) {
		this->_name = trap._name;
		this->_hitPoints = trap._hitPoints;
		this->_energyPoints = trap._energyPoints;
		this->_damage = trap._damage;
	}
	return *this;
}

bool ClapTrap::status(string event) {
	if (_hitPoints == 0) {
		std::cout << "[" <<_name << "]" << " died. Leave him alone" << std::endl;
		return false;
	}
	if ((event == "attack" || event == "repair") && _energyPoints == 0) {
		std::cout << "[" <<_name << "]" << " try to " << event <<", but it discharged. Connect it to charger!" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const string &target) {
	if (!status("attack"))
		return;
	std::cout << "[" <<_name << "]" << " attacked " << target << " ,causing " << _damage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!status("take"))
		return;
	if (amount >= _hitPoints) {
		std::cout << "[" <<_name << "]" << " killed. Rest in peace." << std::endl;
		_hitPoints = 0;
		return;
	}
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!status("attack"))
		return;
	std::cout << "[" <<_name << "]" << " repaired himself for " << amount << " points. HP: " << _hitPoints << std::endl;
	_energyPoints--;
}