#include "easyfind.hpp"

int main() {

	std::cout << "-------------empty vector-------------" << std::endl << std::endl;
	std::vector<int>  vint;
	std::vector<int>::iterator it;
	try {
		std::cout << easyfind(vint, 9) << std::endl;
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl << std::endl;
	}

	std::cout << "-------------Find in vector-------------" << std::endl<< std::endl;
	for (int i = 0; i < 10; i++) {
		vint.push_back(i);
	}
	for (it = vint.begin(); it != vint.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try {
		std::cout << "----> ";
		srand (time(NULL));
		std::cout << easyfind(vint, rand() % 10) << std::endl;
		std::cout << "----> ";
		srand (time(NULL));
		std::cout << easyfind(vint, rand() % 5) + 1 << std::endl;
		std::cout << "----> ";
		srand (time(NULL));
		std::cout << easyfind(vint, rand() % 3) << std::endl << std::endl;
	}
	catch(const std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}

