#include "Array.hpp"

int main(int, char**)
{
	{
		int * a = new int();
		std::cout << *a << std::endl;
		std::cout << "========== Subject test ==========" << std::endl;
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	{
		std::cout << "========== Deep copy test ==========" << std::endl;
		Array<int> numbers(MAX_VAL);
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
		}
		Array<int> numbers2(numbers);
		for (int i = 0; i < MAX_VAL/2; i++)
		{
			const int value = rand();
			numbers2[i] = value;
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (i == MAX_VAL/2)
				std::cout << "It's suppose to be the same from now" << std::endl;
			std::cout << "Number : " << i << "\tList 1: " << numbers[i] << ", List2: " << numbers2[i] << std::endl;
		}
	}
	{
		std::cout << "========== Size test ==========" << std::endl;
		Array<int> numbers(MAX_VAL);
		std::cout << "Size: " << numbers.size() << std::endl;
		Array<int> numbers2(MAX_VAL/2);
		std::cout << "Size: " << numbers2.size() << std::endl;
	}
	{
		std::cout << "========== Default test ==========" << std::endl;
		Array<int> numbers(MAX_VAL);
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << i << ") " << numbers[i] << std::endl;
		}
	}
    return 0;
}
