#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	return 0;
}