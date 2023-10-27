#include "Span.hpp"

int main() {
	{
		std::cout << "------------ Vector empty or with one nbr------------" << std::endl << std::endl;
		Span span(1);
		for (int i = 0; i < 10; i++)
			span.addNumber(i);
		try {
			span.longestSpan();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "------------ Longest Span ------------" << std::endl << std::endl;
		Span span(10);
		std::vector<int>::iterator it;
		for (int i = 0; i < 10; i++)
			span.addNumber(i);
		for (it = span._StockSpan(); it != span._StockSpan(); it++)
			std::cout << *it;
		try {
			std::cout << "		" << span.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
