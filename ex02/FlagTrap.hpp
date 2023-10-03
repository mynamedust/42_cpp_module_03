#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap{
public:
	FlagTrap(const string& name);
	FlagTrap(const FlagTrap& flag);
	~FlagTrap();

	FlagTrap& operator=(const FlagTrap& flag);
	void highFivesGuys(void);
};


#endif
