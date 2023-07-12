#include "Zombie.hpp"

void	Zombie::announce() {

	std::cout << _name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}


// Zombie::Zombie(void) {
// 	_name = "default";
// }

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << _name << std::endl;
}
