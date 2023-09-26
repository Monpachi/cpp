#pragma once

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form *makeForm(std::string form_name, std::string name);

		class NotFound: public std::exception {
			virtual const char* what() const throw();
		};

	private:
		Form	*makePardon(std::string target);
		Form	*makeTree(std::string target);
		Form	*makeRobotomy(std::string target);
		Form	*(Intern::*functionPtr[3])(std::string target);
		std::string	formName[3];

};

// std::ostream &			operator<<( std::ostream & o, Intern const & i );
