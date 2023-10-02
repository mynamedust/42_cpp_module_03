#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap1("Arsen");
	ClapTrap clapTrap2("Jora");

	clapTrap1.attack("Jora");
	clapTrap2.attack("Arsen");

	clapTrap1.takeDamage(10);
	clapTrap2.beRepaired(2);

	ClapTrap clapTrap3 = clapTrap1; // Копирование clapTrap1 в clapTrap3

	clapTrap3.attack("Jora");

	return 0;
}