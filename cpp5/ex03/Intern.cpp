#include "Intern.hpp"

Intern::Intern()
{
	functionPtr[0] = &Intern::makePardon;
	functionPtr[1] = &Intern::makeTree;
	functionPtr[2] = &Intern::makeRobotomy;

	formName[0] = "presidential pardon";
	formName[1] = "shrubbery creation";
	formName[2] = "robotomy request";
}

Intern::Intern( const Intern & src )
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &				Intern::operator=( Intern const & rhs )
{
	functionPtr[0] = rhs.functionPtr[0];
	functionPtr[1] = rhs.functionPtr[1];
	functionPtr[2] = rhs.functionPtr[2];

	formName[0] = rhs.formName[0];
	formName[1] = rhs.formName[1];
	formName[2] = rhs.formName[2];
	return *this;
}

const char* Intern::NotFound::what() const throw()
{
	return "Form not found";
}

Form	*Intern::makeForm(std::string form_name, std::string name) {
	for (int i = 0; i < 3; i++)
	{
		if (form_name == formName[i])
		{
			std::cout << "Intern creates " << formName[i] << " form" << std::endl;
			return ((this->*functionPtr[i])(name));
		}
	}
	throw Intern::NotFound();
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


Form	*Intern::makePardon(std::string target) {
	return (new PresidentialPardonForm(target));
}
Form	*Intern::makeTree(std::string target){
	return (new ShrubberyCreationForm(target));
}
Form	*Intern::makeRobotomy(std::string target){
	return (new RobotomyRequestForm(target));
}

/* ************************************************************************** */
