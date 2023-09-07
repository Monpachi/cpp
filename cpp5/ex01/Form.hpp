#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
	public :
		Form();
		Form(std::string name, int sign, int exec);
		Form(Form const & src);
		~Form();

		const std::string	getName() const;
		int					getGradeExec() const;
		int					getGradeSign() const;
		bool				isSigned() const;
		void				beSigned(Bureaucrat bureaucrat);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class AlreadySigned: public std::exception {
			virtual const char *what() const throw();
		};

	private :
		std::string const 	_name;
		int					_gradeToSign;
		int					_gradeToEx;
		bool				_signed;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
