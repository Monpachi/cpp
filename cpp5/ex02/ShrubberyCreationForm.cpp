
void		exec() const;

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	_target = "Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std:: string target) : AForm("ShrubberyCreationForm", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
	_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm {
}

std::string	ShrubberyCreationForm::getTarget() const {
	return _target;
}

void	ShrubberyCreationForm::exec() const {
	std::ofstream file;
	std::string name = _target + "_shrubbery";

	std::remove(name.c_str());
	file.open(name.c_str(), std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "               ,@@@@@@@," << std::endl
			 << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			 << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			 << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			 << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			 << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			 << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			 << "       |o|        | |         | |" << std::endl
			 << "       |.|        | |         | |" << std::endl
			 << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		file.close();
	}
}
