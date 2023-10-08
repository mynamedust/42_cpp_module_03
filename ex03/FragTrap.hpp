#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
public:
	FragTrap();
	FragTrap(const string& name);
	FragTrap(const FragTrap& flag);
	virtual ~FragTrap();

	FragTrap& operator=(const FragTrap& flag);
	void highFivesGuys(void);
};


#endif
