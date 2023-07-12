#include "HumanA.hpp"

HumanA::HumanA() {
	 return ;
}

HumanA::~HumanA(){
	return ;
}

HumanA::HumanA(std::string name, Weapon &weapon) {
	_name = name;
	_weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() \
	<< std::endl;
	return ;
}
