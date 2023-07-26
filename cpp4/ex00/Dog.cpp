#include "Dog.hpp"

Dog::Dog() {
	std::cout << BLUE "Constructor void Dog Caled" NC << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog & src) : Animal(src) {
	std::cout << BLUE "Constructo Copy Dog" NC << std::endl;
}

Dog::~Dog() {
	std::cout << BLUE "Destructor void Dog Called" NC << std::endl;
}

Dog & Dog::operator=(Dog & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << BLUE "Waouf" NC << std::endl;
}
