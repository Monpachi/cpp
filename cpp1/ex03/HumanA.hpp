#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		HumanA();
		~HumanA();T
		void attack();
	private :
		std::string	_name;
		Weapon		*_weapon;
};

#endif
