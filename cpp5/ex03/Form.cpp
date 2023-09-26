#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("name"), _grade_sign(1), _grade_exec(1)
{
	_signed = false;
}

Form::Form(std::string name, int signe, int exec) : _name(name), _grade_sign(signe), _grade_exec(exec)
{
	if (signe < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (signe > 150 || exec > 150)
		throw Form::GradeTooLowException();
	_signed = false;
}

Form::Form( const Form & src ) : _name(src.getName()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec())
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();
	_signed = src.isSigned();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


Form & Form::operator=(const Form &assign)
{
	_signed = assign.isSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


const std::string Form::getName() const{
	return (_name);
}

bool		Form::isSigned() const{
	return (_signed);
}

int			Form::getGradeSign() const{
	return (_grade_sign);
}

int			Form::getGradeExec() const{
	return (_grade_exec);
}

void		Form::beSigned(Bureaucrat bureaucrat){
	if (isSigned())
		throw Form::AlreadySigned();
	else if (bureaucrat.getGrade() <= _grade_sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

void		Form::execute(Bureaucrat const &bureaucrat) const {
	if(!_signed)
		throw Form::NotSigned();
	if(bureaucrat.getGrade() <= _grade_exec)
		executed();
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/*
** --------------------------------- Exceptions ---------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

const char* Form::AlreadySigned::what() const throw()
{
	return "The form is already signed";
}

const char* Form::NotSigned::what() const throw()
{
	return "The form isn't signed";
}

/* ************************************************************************** */