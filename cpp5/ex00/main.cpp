#include "Bureaucrat.hpp"

int main() {

	std::cout << "------------- basic test -------------" << std::endl;
	{
		Bureaucrat stevie("stevie", 30);
		std::cout << stevie << std::endl;
		stevie.increase(5);
		std::cout << _GREEN << "increase stevie's rank by 5" << _END << std::endl;
		std::cout << stevie << std::endl;
		std::cout << _GREEN << "increase stevie's rank by 25" << _END << std::endl;
		try {
			stevie.increase(25);
		}
		catch(const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << stevie << std::endl;
		stevie.decrease(5);
		std::cout << _GREEN << "decrease stevie's rank by 5" << _END << std::endl;
		std::cout << stevie << std::endl;
		std::cout << _GREEN << "decrease stevie's rank by 150" << _END << std::endl;
		try {
			stevie.decrease(150);
		}
		catch(const std::exception& exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << stevie << std::endl;
	}

	std::cout <<std::endl << "------------- test high -------------" << std::endl;
	try {
		std::cout << "trying to make bob 0 grade" << std::endl;
		Bureaucrat bob("bob", 0);
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		std::cout << "increase bob by 1" << std::endl;
		std::cout << "1 - 1 is not working, so bob can't go to work" << std::endl;
		bob.increase();
		std::cout << bob << std::endl;
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}

	std::cout << std::endl << "------------- test low -------------" << std::endl;
	try {
		std::cout << "trying to make bob 151 grade" << std::endl;
		Bureaucrat bob("bob", 151);
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;
		std::cout << "decrease bob by 1" << std::endl;
		std::cout << "150 + 1 is not working, so bob can't go to work" << std::endl;
		bob.decrease();
		std::cout << bob << std::endl;
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
}
