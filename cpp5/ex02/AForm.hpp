#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm {
	public :
		AForm();
		AForm(std::string name, int sign, int exec);
		AForm(AForm const & src);
		~AForm();

		const std::string	getName() const;
		virtual int					getGradeExec() const;
		virtual int					getGradeSign() const;
		virtual bool				isSigned() const;
		virtual void				beSigned(Bureaucrat bureaucrat) = 0;

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

std::ostream &			operator<<( std::ostream & o, AForm const & i );
