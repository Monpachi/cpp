#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	_target = "Target";
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
	_target = copy.getTarget();
	srand(time(NULL));
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
// {
// 	Form::operator=(assign);
// 	_target = assign.getTarget();
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << i.getName() << " | signed  : " << i.isSigned() << " | exec grade : " << i.getGradeExec() << " | sign grade : " << i.getGradeSign();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const{
	return (_target);
}

void		RobotomyRequestForm::executed() const {
	// srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "bzzzzz " << _target << " robotomy failed" << std::endl;
		return ;//echec
	}
	std::cout << "bzzzzz " << _target << " has been robotomized" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */