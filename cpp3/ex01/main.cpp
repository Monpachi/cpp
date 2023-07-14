#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# include <algorithm>

int main(void) {
	{
		ClapTrap Steve = ClapTrap("Steve");
		ClapTrap Kevin = Steve;
	}
	std::cout << std::endl << "---------------Energy test--------------" << std::endl << std::endl;
	{
		ClapTrap Adam("Adam");
		for (int i = 0; i < 15; i++) {
			if (i >= 10)
				std::cout << "ClapTrap " << Adam.getName() << " has 0 energy" << std::endl;
			std::cout << "Energy : " << Adam.getEnergy() << std::endl;
			Adam.attack("Kevin");
		}
		std::cout << std::endl;
		Adam.beRepaired(15);
	}
	std::cout << std::endl << "---------------Hit Point Test--------------" << std::endl << std::endl;
	{
		ClapTrap Maria("Maria");
		for (int i = 0; i < 15; i++) {
			if (i >= 10)
				std::cout << "ClapTrap " << Maria.getName() << " has 0 Pv" << std::endl;
			std::cout << "Pv : " << Maria.getPv() << std::endl;
			Maria.takeDamage(1);
		}
			std::cout << std::endl;
			Maria.beRepaired(15);
			Maria.attack("Bob");
	}
	std::cout << std::endl << "---------------The Epic Fight--------------" << std::endl << std::endl;
	{
		int health = 10;
		int energy = 10;
		ClapTrap Seth("Seth");
		std::cout << "The fight between Seth and his regret" << std::endl << std::endl;
		while (1)
		{
			int hit = rand() % 3;
			int heal = rand() % 10;
			std::cout << "\033[0;31mRegret attacks Seth\033[0m" << std::endl;
			std::cout << "\033[0;32mSeth's Pv\033[0m : " << health << "\t|  \033[0;31mHit\033[0m " << hit << "\t";
			Seth.takeDamage(hit);
			health = health - hit;
			if (health <= 0)
				break;
			if (rand() % 4 == 0)
			{
				Seth.beRepaired(heal);
				if (energy) {
					health += heal;
					energy -= 1;
				}
			}
			if (rand() % 3 == 0)
			{
				Seth.attack("Regret");
				std::cout << "\033[0;31mRegret is laughing at you with your useless strenght\033[0m" << std::endl;
				std::cout << "\033[0;32mSeth's Pv\033[0m : " << health << "\t";
				energy -= 1;
				std::cout << std::endl;
			}
		}
	}
	std::cout << std::endl << "---------------Another Challenger--------------" << std::endl << std::endl;
	{
		ScavTrap Adam("Adam");
	}
	std::cout << std::endl << "---------------Energy test--------------" << std::endl << std::endl;
	{
		ScavTrap Adam("Adam");
		for (int i = 0; i < 55 ; i++) {
			if (i >= 10)
				std::cout << "ScavTrap " << Adam.getName() << " has 0 energy" << std::endl;
			std::cout << "Energy : " << Adam.getEnergy() << std::endl;
			Adam.attack("Kevin");
		}
		std::cout << std::endl;
		Adam.beRepaired(15);
	}
	std::cout << std::endl << "---------------Hit Point Test--------------" << std::endl << std::endl;
	{
		ScavTrap Maria("Maria");
		for (int i = 0; i < 105 ; i++) {
			if (i >= 10)
				std::cout << "ScavTrap " << Maria.getName() << " has 0 Pv" << std::endl;
			std::cout << "Pv : " << Maria.getPv() << std::endl;
			Maria.takeDamage(1);
		}
			std::cout << std::endl;
			Maria.beRepaired(15);
			Maria.attack("Bob");
	}
	std::cout << std::endl << "---------------The Epic Fight--------------" << std::endl << std::endl;
	{
		int health = 100;
		int energy = 50;
		ScavTrap Seth("Seth");
		std::cout << "The fight between Seth and his regret" << std::endl << std::endl;
		while (1)
		{
			int hit = rand() % 15;
			int heal = rand() % 20;
			std::cout << "\033[0;31mRegret attacks Seth\033[0m" << std::endl;
			std::cout << "\033[0;32mSeth's Pv\033[0m : " << health << "\t|  \033[0;31mHit\033[0m " << hit << "\t";
			Seth.takeDamage(hit);
			health = health - hit;
			if (health <= 0)
				break;
			if (rand() % 4 == 0)
			{
				Seth.beRepaired(heal);
				if (energy) {
					health += heal;
					energy -= 1;
				}
			}
			if (rand() % 3 == 0)
			{
				Seth.attack("Regret");
				std::cout << "\033[0;31mRegret is laughing at you with your useless strenght\033[0m" << std::endl;
				std::cout << "\033[0;32mSeth's Pv\033[0m : " << health << "\t";
				energy -= 1;
				std::cout << std::endl;
			}
		}
	}
}
