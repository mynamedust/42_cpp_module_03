#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

typedef std::string string;

class ClapTrap {
protected:
	string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _damage;
public:
	ClapTrap();
	ClapTrap(const string& name);
	ClapTrap(const ClapTrap& trap);
	virtual ~ClapTrap();
	ClapTrap& operator=(const ClapTrap& trap);

	virtual void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool status(string event);
};


#endif
