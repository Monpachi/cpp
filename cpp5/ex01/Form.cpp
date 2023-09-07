#include "Form.hpp"

Form::Form() : _name("Name") {
	std::cout << "Constructor form called" << std::endl;
	_gradeToSign = 50;
	_gradeToEx = 50;
	_signed = false;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _gradeToSign(sign), _gradeToEx(exec) {
	std::cout << "contructor form named called" << std::endl;
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	_signed = false;
}

Form::Form( const Form & src ) : _name(src.getName()), _gradeToSign(src.getGradeSign()), _gradeToEx(src.getGradeExec()) {
	// std::cout << "Constructor copy Form called" << _name << std::endl;
	if (_gradeToSign < 1 ||  _gradeToEx < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToEx > 150)
		throw Form::GradeTooLowException();
	_signed = src.isSigned();
}

Form::~Form() {
	// std::cout << "Destructor Form called" << std::endl;
}

const std::string Form::getName() const {
	return _name;
}

int Form::getGradeExec() const {
	return _gradeToEx;
}

int Form::getGradeSign() const {
	return _gradeToSign;
}

bool Form::isSigned() const {
	return _signed;
}

void Form::beSigned(Bureaucrat bureaucrat){
	if (isSigned())
		throw Form::AlreadySigned();
	else if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return _RED "The grade is too high" _END;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return _RED "The grade is too low" _END;
}

const char* Form::AlreadySigned::what() const throw()
{
	return _RED "The form is already signed" _END;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << _GREEN << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign() << _END;
	return o;
}
