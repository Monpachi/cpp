#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string newtype);

	private:
		std::string _type;
		std::string _weapon;
};

#endif
