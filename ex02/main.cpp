#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	scav.takeDamage(200);
	scav.guardGate();

	// Тестирование класса ScavTrap
	FragTrap frag("Frag");
	frag.attack("Grigor");
	frag.highFivesGuys();
	return 0;
}