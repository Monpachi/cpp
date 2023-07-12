#include "PhoneBook.hpp"

std::string g_err = "\033[1;32m~ Here's your PhoneBook\033[0m";

int main()
{
	PhoneBook Phonebook;
	Phonebook.set_nb();
	std::string str;
	while (1)
	{
		system("clear");
		std::cout << " ██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗ " << std::endl;
		std::cout << " ██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝ " << std::endl;
		std::cout << " ██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
		std::cout << " ██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
		std::cout << " ██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗ " << std::endl;
		std::cout << " ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝ " << std::endl << std::endl;
		if (g_err.length()) {
			std::cout << g_err << std::endl << std::endl;
			g_err = "";
		}
		std::cout << "\033[1;32m~ Please, Type 'ADD', 'SEARCH', or 'EXIT' \033[0m\n" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (0);
		if (str == "ADD") {
			Phonebook.ADD();
			if (g_err.length())
				std::cout << std::endl << g_err << std::endl << std::endl;
			std::cout << "Press Enter" << std::endl;
			std::getline(std::cin, str);
			if (std::cin.eof())
				return (0);
			if (str.empty())
				continue ;
		}
		else if (str == "SEARCH") {
			Phonebook.SEARCH();
			std::cout << "Press Enter" << std::endl;
			std::getline(std::cin, str);
			if (std::cin.eof())
				return (0);
			if (str.empty())
				continue ;
		}
		else if (str == "EXIT")
			return (0);
		else
			g_err = ERROR;
	}
	return (0);
}
