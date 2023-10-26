#include "iter.hpp"

void iterone(int& num) {
	num = num + 1;
}

int main( void ) {
	int number[] = {1 ,2 ,3 , 4 ,5};
	std::size_t size = 5;

	for (std::size_t i = 0; i < size; i++) {
		std::cout << number[i];
	}

	std::cout << std::endl;
	iter(number,size,iterone);

	for (std::size_t i = 0; i < size; i++) {
		std::cout << number[i];
	}
	std::cout << std::endl;
	return (0);
}
