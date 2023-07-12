#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout << "Default constructor called" << std::endl;
	_val = 0 << _val_const;
}

Fixed::Fixed(int integer){
	// std::cout << "Int constructor called" << std::endl;
	_val = integer << _val_const;
}

Fixed::Fixed(float floateger) {
	// std::cout << "Float constructor called" << std::endl;
	_val = roundf(floateger * (1 << _val_const));
}

Fixed::Fixed(Fixed const &src) {
	// std::cout << "Copy constructor called" << std::endl;
	_val = src.getRawBits();
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

//---------------------------------------------//

bool Fixed::operator<(Fixed const & first) const {
	if (_val < first.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(Fixed const & first) const {
	if (_val > first.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & first) const {
	if (_val >= first.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & first) const {
	if (_val <= first.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const & first) const {
	if (_val == first.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & first) const {
	if (_val != first.getRawBits())
		return (true);
	return (false);
}

//---------------------------------------------//

Fixed Fixed::operator=(Fixed const & rhs){
	this->_val = rhs.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & rhs){
	Fixed tmp(*this);
	tmp._val += rhs.getRawBits();
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & rhs){
	Fixed tmp(*this);
	tmp._val -= rhs.getRawBits();
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & rhs){
	Fixed tmp(*this);
	tmp.setRawBits((this->toFloat() * rhs.toFloat()) * (float)(1 << _val_const));
	return (tmp);
}

Fixed Fixed::operator/(Fixed const & rhs){
	Fixed tmp(*this);
	// std::cout << "me : " << this->toFloat() << std::endl << "him : " << rhs.toFloat() << std::endl;
	tmp.setRawBits((this->toFloat() / rhs.toFloat()) * (float)(1 << _val_const));
	// std::cout << "result : " << this->toFloat();
	return (tmp);
}

//---------------------------------------------//

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	_val++;
	return (tmp);
}

Fixed &Fixed::operator++(void){
	_val++;
	return (*this);
}

Fixed &Fixed::operator--(void){
	_val--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	_val--;
	return (tmp);
}

//---------------------------------------------//

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

// Fixed & Fixed::min(Fixed &a, Fixed &b)
// {
// 	return (a < b ? a : b);
// }
// const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
// {
// 	return (a < b ? a : b);
// }
// Fixed & Fixed::max(Fixed &a, Fixed &b)
// {
// 	return (a > b ? a : b);
// }
// const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
// {
// 	return (a > b ? a : b);
// }

//---------------------------------------------//

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits( int const raw ) {
	_val = raw;
}

int Fixed::toInt( void ) const {
	return (_val >> _val_const);
}

float Fixed::toFloat( void ) const {
	return ((float)_val / (float)(1 << _val_const));
}

std::ostream &operator<<( std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return (out);
}
