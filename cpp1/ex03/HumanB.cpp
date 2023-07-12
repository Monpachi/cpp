#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if(_weapon == NULL)
		std::cout << _name << " attacks with their hands" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
