#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

typedef std::string string;

class ClapTrap {
private:
	string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _damage;
public:
	ClapTrap(const string& name);
	ClapTrap(const ClapTrap& trap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& trap);

	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool status(string event);
};


#endif
