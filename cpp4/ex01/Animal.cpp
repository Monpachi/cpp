#include "Animal.hpp"

/****************Constructors***************/

Animal::Animal() {
	std::cout << "Constructor Animal void Called " << std::endl;
	_type = "NoType";
}

Animal::Animal(const Animal & src)
{
	std::cout << "Constructor Copy Animal" << std::endl;
	_type = src.getType();
}

/****************Desstructor***************/

Animal::~Animal() {
	std::cout << "Destructor Animal Called" << std::endl;
}

/****************Overload***************/

Animal &Animal::operator=( Animal const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

/****************Functions***************/

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound(void) const {
	std::cout << "Making sound" << std::endl;
}

