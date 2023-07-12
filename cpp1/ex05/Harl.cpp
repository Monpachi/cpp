#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	Map list[4] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	for(int i = 0; i < 4; i++)
	{
		if(list[i].fonction_name == level)
		{
			(this->*list[i].fonction_ptr)();
			return;
		}
	}
	std::cout << "Command unknown : " << level << std::endl;
}
