#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Name") {
	std::cout << "Constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name) {
	std::cout << "Constructor name called" << std::endl;
	_grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "Constructor name " << _name << " grade called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName())
{
	std::cout << "Constructor copy Bureaucrat " << _name << std::endl;
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor " << getName() << " called" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}

void Bureaucrat::decrease() {
	decrease(1);
}

void Bureaucrat::decrease(int i) {
	if (_grade + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += i;
}

void Bureaucrat::increase() {
	increase(1);
}

void Bureaucrat::increase(int i) {
	if (_grade - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= i;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_RED "The grade is too high" _END);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_RED "The grade is too low" _END);
}
