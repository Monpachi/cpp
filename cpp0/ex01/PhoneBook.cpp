#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::ADD(){
	std::string str;
	show();
	std::cout << "What is your first Name?" << std::endl;
	std::getline(std::cin,str); //cin = STDIN;
	Index[0].set_First_name(str); //Change la valeur de User qui est private
	std::cout << Index[0].get_First_name() << std::endl;
	if (std::cin.eof())
		return;
	show();

}

int main()
{
	PhoneBook Phonebook;

	Phonebook.ADD();
}
