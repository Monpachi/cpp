#include "Zombie.hpp"

void	Zombie::announce() {

	std::cout << _name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
	_name = "name";
}

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << _name << std::endl;
}

void Zombie::set_name(std::string name) {
	_name = name;
}
