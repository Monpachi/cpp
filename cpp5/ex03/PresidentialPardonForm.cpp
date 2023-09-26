#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	_target = "Target";
}

PresidentialPardonForm::PresidentialPardonForm(std:: string target) : Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
	_target = copy.getTarget();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
// {
// 	Form::operator=(assign);
// 	_target = assign.getTarget();
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const{
	return (_target);
}

void		PresidentialPardonForm::executed() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */