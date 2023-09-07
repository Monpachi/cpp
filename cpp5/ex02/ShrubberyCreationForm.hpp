#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

		std::string	getTarget() const;
		void		exec() const;

	private :
		std::string	_target;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );
