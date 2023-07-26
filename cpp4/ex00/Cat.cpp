#include "Cat.hpp"

Cat::Cat() {
	std::cout << YELLOW "Constructor void Cat Caled" NC << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & src) : Animal(src) {
	std::cout << YELLOW "Constructo Copy Cat" NC << std::endl;
}

Cat::~Cat() {
	std::cout << YELLOW "Destructor void Cat Called" NC << std::endl;
}

Cat & Cat::operator=(Cat & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << YELLOW "Meow" NC << std::endl;
}
