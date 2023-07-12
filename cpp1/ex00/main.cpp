#include "Zombie.hpp"

int main() {
	Zombie TheZombie("adam");

	TheZombie.announce();

	Zombie *a = newZombie("eve");
	a->announce();
	delete a;

	randomChump("lilith");
}
