#include "Cat.hpp"

Cat::Cat() {
	std::cout << YELLOW "Constructor void Cat Caled" NC << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat & src) : Animal(src) {
	std::cout << YELLOW "Constructo Copy Cat" NC << std::endl;
	_brain = new Brain(*(src.getBrain()));
}

Cat::~Cat() {
	delete(_brain);
	std::cout << YELLOW "Destructor void Cat Called" NC << std::endl;
}

Cat & Cat::operator=(Cat & rhs) {
	this->_type = rhs.getType();
	this->_brain = new Brain(*(rhs.getBrain()));
	return *this;
}

void Cat::makeSound() const {
	std::cout << YELLOW "Meow" NC << std::endl;
}
Brain	*Cat::getBrain(void) const{
	return (_brain);
}
