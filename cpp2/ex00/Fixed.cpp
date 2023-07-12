#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	// _val = 0;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits( int const raw ) {
	_val = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();
	return (*this);
}
