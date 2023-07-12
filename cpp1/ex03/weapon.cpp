#include "weapon.hpp"

std::string Weapon::getType() {
	return (_type);
}

void Weapon::setType(std::string newtype) {
	_type = newtype;
}

Weapon::Weapon() {
	_type = "default";
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Destructor called for " << _type << std::endl;
}
