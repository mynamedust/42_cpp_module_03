#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	FragTrap frag("Frag");
	frag.attack("Grigor");
	frag.highFivesGuys();

	DiamondTrap diamond("Destroyer");
	diamond.attack("Grigor");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.takeDamage(5);
	diamond.beRepaired(3);
	diamond.whoAmI();
	return 0;
}