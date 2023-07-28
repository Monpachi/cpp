#include "AAnimal.hpp"

/****************Constructors***************/

AAnimal::AAnimal() {
	std::cout << "Constructor AAnimal void Called " << std::endl;
	_type = "NoType";
}

AAnimal::AAnimal(const AAnimal & src)
{
	std::cout << "Constructor Copy AAnimal" << std::endl;
	_type = src.getType();
}

/****************Desstructor***************/

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal Called" << std::endl;
}

/****************Overload***************/

AAnimal &AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

/****************Functions***************/

std::string AAnimal::getType() const {
	return (_type);
}

void AAnimal::makeSound(void) const {
	std::cout << "Making sound" << std::endl;
}

