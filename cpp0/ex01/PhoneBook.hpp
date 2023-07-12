#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

# define CUPIDON "\033[1;36m ~ Cupidon : \033[0m"
# define MAGIRL "\033[1;31m👰 You (My dev's Crush) : \033[0m";
# define ERROR "\033[1;93m Wrong Input \033[0m";
class PhoneBook
{
	public:
		void	ADD();
		void	show();
		void	SEARCH();
		void	set_nb(void);
		int		str_digit(std::string);

	private:
		int		nb;
		Contact Index[8];
};

#endif
