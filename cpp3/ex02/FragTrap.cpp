#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << PURPLE "Constructor void FragTrap called" NC << std::endl;
	_Hit_point = 100;
	_Energy_point = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << PURPLE "Constructor string FragTrap called" NC << std::endl;
	_Name = name;
	_Hit_point = 100;
	_Energy_point = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &trap) : ClapTrap(trap) {
	std::cout << PURPLE "Constuctor copy Frag called" NC << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << PURPLE "Destructor void Frag Called" NC << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << PURPLE "Frag Trap " << _Name << " ヘ( ^o^)ノ＼(^_^ )" NC << std::endl;
}

FragTrap	FragTrap::operator=(FragTrap const & rhs) {
	std::cout << PURPLE "Copy assignment operator called" NC << std::endl;
	this->_Name = rhs._Name;
	this->_Hit_point = rhs._Hit_point;
	this->_Energy_point = rhs._Energy_point;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}
