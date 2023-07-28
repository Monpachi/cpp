#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << CYAN "Constructor WrongAnimal called" NC << std::endl;
	_type = "Unknown Wrong Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & src) {
	std::cout << CYAN "Constructor copy Wrong Animal Called" NC << std::endl;
	_type = src.getType();
}

WrongAnimal::~WrongAnimal() {
	std::cout << CYAN "Destructor Wrong Animal Called" NC << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << CYAN "Making WrongAnimal Sound" NC << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}
