#include "Dog.hpp"

Dog::Dog() {
	std::cout << BLUE "Constructor void Dog Caled" NC << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog & src) : AAnimal(src) {
	std::cout << BLUE "Constructo Copy Dog" NC << std::endl;
	_brain = new Brain(*(src.getBrain()));
}

Dog::~Dog() {
	delete(_brain);
	std::cout << BLUE "Destructor void Dog Called" NC << std::endl;
}

Dog & Dog::operator=(Dog & rhs) {
	this->_type = rhs.getType();
	this->_brain = new Brain(*rhs.getBrain());
	return *this;
}

void Dog::makeSound() const {
	std::cout << BLUE "Waouf" NC << std::endl;
}

Brain	*Dog::getBrain(void) const{
	return (_brain);
}
