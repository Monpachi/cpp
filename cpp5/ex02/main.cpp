#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	std::cout << "------------- initiate -------------" << std::endl;
	{
		Bureaucrat	Stevie("Stevie", 100);
		Form		Form("MangerPourTous", 50, 50);

		std::cout << "------------- increasing sign -------------" << std::endl;
		std::cout << Form << std::endl;
		std::cout << _YELLOW << Stevie << _END << std::endl;
		std::cout << std::endl << "trying to sign" << std::endl;
		try {
			Form.beSigned(Stevie);
		}
		catch (const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << "increase 50 Stevie" << std::endl;
		Stevie.increase(50);
		std::cout << _GREEN << Stevie << _END << std::endl;
		std::cout << "increasing 50 stevie" << _END << std::endl;
		try {
			Stevie.increase(50);
		}
		catch(const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}

		std::cout << std::endl <<  "------------- Good grade to sign -------------" << std::endl;
		std::cout << Stevie << std::endl;
		std::cout << "signing" << std::endl;
		Form.beSigned(Stevie);
		std::cout << Form << std::endl;

		Bureaucrat Guy("Guy", 1);
		std::cout << std::endl <<  "---------- trying to sign an already signed Form ----------" << std::endl;
		std::cout << _GREEN << Guy << _END << std::endl;
		try {
			Form.beSigned(Guy);
		}
		catch(const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
	}
	std::cout << std::endl <<  "---------- Form test----------" << std::endl;
	{
		std::cout << "trying to make Form 0 grade" << std::endl;
		try {
			Form Form("Law", 0, 0);
		}
		catch (const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << "trying to make Form 150 grade" << std::endl;
		try {
			Form Form("Law", 151, 151);
		}
		catch (const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << "trying to make Form good grade" << std::endl;
		Form Form("Law", 1, 1);
		std::cout << Form << std::endl;
	}
}
