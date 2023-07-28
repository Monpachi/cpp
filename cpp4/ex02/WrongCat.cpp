#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << PURPLE "Constructor void WrongCat Caled" NC << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src) {
	std::cout << PURPLE "Constructo Copy WrongCat" NC << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << PURPLE "Destructor void WrongCat Called" NC << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << PURPLE "Wrong Animal Meow" NC << std::endl;
}
