#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(const string& name);
	FragTrap(const FragTrap& flag);
	~FragTrap();

	FragTrap& operator=(const FragTrap& flag);
	void highFivesGuys(void);
};


#endif
