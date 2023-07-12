#ifndef HUMANB_H
# define HUMANB_H

# include "weapon.hpp"

class HumanB {

	public :
		HumanB(std::string type);
		~HumanB();
		void		setWeapon(Weapon &weapon);
		void		attack();

	private :
		std::string _name;
		Weapon		*_weapon;

};

#endif
