#include "Intern.hpp"

int     main()
{
	{
		Intern intern = Intern();
		Bureaucrat master = Bureaucrat("Master", 1);
		Form *form;
		try
		{
				form = intern.makeForm("shrubbery creation", "Target1");
				master.signForm(*form);
				master.executeForm(*form);
				delete(form);
		}
		catch(const std::exception& e)
		{}
		try
		{
				form = intern.makeForm("robotomy request", "Target2");
				master.signForm(*form);
				master.executeForm(*form);
				delete(form);
		}
		catch(const std::exception& e)
		{}
		try
		{
				form = intern.makeForm("presidential pardon", "Target3");
				master.signForm(*form);
				master.executeForm(*form);
				delete(form);
		}
		catch(const std::exception& e)
		{}
		try
		{
				form = intern.makeForm("another form", "Target4");
				master.signForm(*form);
				master.executeForm(*form);
				delete(form);
		}
		catch(const std::exception& e)
		{}
	}
	{
		Intern someRandomIntern;
		Intern	sisi;
		someRandomIntern = sisi;
		Form* rrf;
		Form* rrf2;


		try{
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		}
		catch(const std::exception& e){
			std::cout << "ERROR: "<< e.what() << '\n';
		}

		try{
			rrf2 = someRandomIntern.makeForm("blablabla request", "Bender");
		}
		catch(const std::exception& e){
			std::cout << "ERROR: "<< e.what() << '\n';
			try{
				rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender");
			}
			catch(const std::exception& e){
				std::cout << "ERROR: "<< e.what() << '\n';
			}
		}

		Bureaucrat president("Bob", 1);
		Bureaucrat noob("Patrick", 148);

		try {

		noob.executeForm(*rrf);
		}
		catch(const std::exception& e) {
			std::cout << "ERROR: "<< e.what() << '\n';
			try {
				president.signForm(*rrf);
				noob.executeForm(*rrf);
			}
			catch(const std::exception& e) {
				std::cout << "ERROR: "<< e.what() << '\n';
				try {
					president.executeForm(*rrf);
				}
				catch(const std::exception& e) {
					std::cout << "ERROR: "<< e.what() << '\n';
				}
			}
		}

		delete rrf;
		delete rrf2;
	}
}
