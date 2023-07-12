#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::set_nb()
{
	this->nb = 0;
}

int PhoneBook::str_digit(std::string str) {
	for (int i = 0; i < str.length(); i++)
        if (!std::isdigit(str[i])) {
			g_err = ERROR;
			return (1);
		}
    return 0;
}

void	PhoneBook::ADD(){
	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Phone_number;
	std::string Darkest_secret;
	std::string Relationship_status;
	std::string Age;

	std::cout << std::endl;
	std::cout << CUPIDON << "What is your first Name?" << std::endl;
	std::cout << MAGIRL;;
	std::getline(std::cin,First_name); //cin = STDIN;
	if (First_name.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	std::cout << std::endl;

	std::cout << CUPIDON << "What is your last Name?" << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin,Last_name);
	if (Last_name.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	std::cout << std::endl;

	std::cout << CUPIDON << "What is your cute Nickname?" << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin,Nickname);
	if (Nickname.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	std::cout << std::endl;

	std::cout << CUPIDON << "My developper would love to get your number, to send you some ..hum..  txt?" << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin,Phone_number);
	if (Phone_number.empty()) {
		g_err = ERROR;
		return ;
	}
	if (str_digit(Phone_number))
		return ;
	if (std::cin.eof())
		return;
	std::cout << std::endl;

	std::cout << CUPIDON << "Master is still single, what about you? Typing 'Single' is the only answer possible " << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin, Relationship_status);
	if (Relationship_status.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	if (Relationship_status != "Single" && Relationship_status != "single") {
		std::cout << CUPIDON << "What did i say? Try with the correct answer 💔" << std::endl;
		std::cout << MAGIRL;
		std::getline(std::cin,Relationship_status);
		if (Relationship_status.empty())
			return ;
		if (std::cin.eof())
			return;
		if (Relationship_status != "Single" && Relationship_status != "single") {
			std::cout << CUPIDON << "You still don't get it? 😡" << std::endl;
			std::cout << MAGIRL;
			std::getline(std::cin,Relationship_status);
			if (Relationship_status.empty())
				return ;
			if (std::cin.eof())
				return;
			if (Relationship_status != "Single" && Relationship_status != "single") {
				std::cout << CUPIDON << "Ok, i'm stopping here, i don't want you to report my master, you are free to be with someone else...just saying Seth is awesome 💔" << std::endl;
			}
			else {
				std::cout << CUPIDON << " Good <3" << std::endl;
			}
		}
		else {
			std::cout << CUPIDON << "Good <3" << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << CUPIDON << "Tell me now, what is your darkest secret? So my maker can run away if it's too weird" << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin,Darkest_secret);
	if (Darkest_secret.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	std::cout << std::endl;

	std::cout << CUPIDON << "Well, i forgot to ask you something really important..." << std::endl;
	std::cout << CUPIDON << "You see, my maker is 30 years old, what about you?" << std::endl;
	std::cout << MAGIRL;
	std::getline(std::cin,Age);
	if (Age.empty()) {
		g_err = ERROR;
		return ;
	}
	if (std::cin.eof())
		return;
	std::cout << CUPIDON << "I hope you're +18..." << std::endl;
	std::cout << std::endl;

	if (this->nb > 7)
		this->nb = 0;
	Index[nb].set_First_name(First_name); //Change la valeur de User qui est private
	Index[nb].set_Last_name(Last_name);
	Index[nb].set_Nickname(Nickname);
	Index[nb].set_Phone(Phone_number);
	Index[nb].set_Relation(Relationship_status);
	Index[nb].set_Dark(Darkest_secret);
	Index[nb].set_Age(Age);
	this->nb++;
}

void	PhoneBook::SEARCH(){
	std::cout << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Index" << "|" << std::setfill(' ') \
	<< std::setw(10) << "First name" << "|" << std::setfill(' ') << std::setw(10) << "Last name" \
	<< "|" << std::setfill(' ') << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << Index[i].get_First_name();
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << Index[i].get_Last_name();
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << Index[i].get_Nickname();
		std::cout << "|" << std::endl;
		}

	std::string str;
	int		index;
	std::cout << CUPIDON << "Select one of the crushes" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return ;
	if (str.length() != 1) {
		g_err = ERROR;
		return ;
	}
	index = std::atoi(str.c_str());
	if (index > 0 && index < 9)
		Index[index - 1].show();
	else
		g_err = ERROR;
	std::cout << std::endl;
}
