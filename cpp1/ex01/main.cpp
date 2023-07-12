#include "Zombie.hpp"

int main() {
	int nb = 10;
	Zombie *zombie = zombieHorde(nb, "kevin");
	for (int i = 0; i < nb; i++) {
		std::cout << "Zombie number : " << i << std::endl;
		zombie[i].announce();
	}
	delete[] zombie;
}
