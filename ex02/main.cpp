#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {
	// Тестирование класса ClapTrap
	ClapTrap clap("Clap");
	clap.attack("Target");
	clap.takeDamage(5);
	clap.beRepaired(3);

	// Тестирование класса ScavTrap
	ScavTrap scav("Scav");
	scav.attack("Grigor");
	scav.guardGate();

	// Тестирование класса ScavTrap
	FlagTrap flag("Flag");
	flag.attack("Grigor");
	flag.highFivesGuys();
	return 0;
}