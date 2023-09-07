#pragma once

#include <iostream>
#include <string>

# define _END "\e[0m"
# define _BOLD "\e[1m"
# define _RED "\e[31m"
# define _GREEN "\e[32m"
# define _YELLOW "\e[33m"
# define _BLUE "\e[34m"

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=( Bureaucrat const &rhs);

		const std::string	getName() const;
		int					getGrade() const;

		void				decrease();
		void				decrease(int i);
		void				increase();
		void				increase(int i);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

	private :
		std::string const _name;
		int			_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );
