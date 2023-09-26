#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string name, int signe, int exec);
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		const std::string getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void		beSigned(Bureaucrat bureaucrat);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class AlreadySigned: public std::exception {
			virtual const char* what() const throw();
		};
		class NotSigned: public std::exception {
			virtual const char* what() const throw();
		};

		virtual void executed() const = 0;
		void	execute(Bureaucrat const &bureaucrat) const;

	private:
		std::string	const _name;
		bool		_signed;
		int const	_grade_sign;
		int const	_grade_exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
