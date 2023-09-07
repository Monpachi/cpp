#include "AForm.hpp"

AForm::AForm() : _name("Name") {
	std::cout << "Constructor Aform called" << std::endl;
	_gradeToSign = 50;
	_gradeToEx = 50;
	_signed = false;
}

AForm::AForm(std::string name, int sign, int exec) : _name(name), _gradeToSign(sign), _gradeToEx(exec) {
	std::cout << "contructor Aform named called" << std::endl;
	if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
	_signed = false;
}

AForm::AForm( const AForm & src ) : _name(src.getName()), _gradeToSign(src.getGradeSign()), _gradeToEx(src.getGradeExec()) {
	// std::cout << "Constructor copy AForm called" << _name << std::endl;
	if (_gradeToSign < 1 ||  _gradeToEx < 1)
		throw AForm::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToEx > 150)
		throw AForm::GradeTooLowException();
	_signed = src.isSigned();
}

AForm::~AForm() {
	// std::cout << "Destructor AForm called" << std::endl;
}

const std::string AForm::getName() const {
	return _name;
}

int AForm::getGradeExec() const {
	return _gradeToEx;
}

int AForm::getGradeSign() const {
	return _gradeToSign;
}

bool AForm::isSigned() const {
	return _signed;
}

void AForm::beSigned(Bureaucrat bureaucrat){
	if (isSigned())
		throw AForm::AlreadySigned();
	else if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return _RED "The grade is too high" _END;
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return _RED "The grade is too low" _END;
}

const char* AForm::AlreadySigned::what() const throw()
{
	return _RED "The Aform is already signed" _END;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << _GREEN << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign() << _END;
	return o;
}
