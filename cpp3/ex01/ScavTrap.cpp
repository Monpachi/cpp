#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	std::cout  << "\e[0;34mConstructor void Scav Called\e[0m"<< std::endl;
	_Hit_point = 100;
	_Energy_point = 50;
	_Attack_damage = 20;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << YELLOW "Constuctor string Scav called" NC << std::endl;
	_Hit_point = 100;
	_Energy_point = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &trap) : ClapTrap(trap) {
	std::cout << YELLOW "Constuctor copy Scav called" NC << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW "Destructor void Scav Called" NC << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_Hit_point <= 0) {
		std::cout << YELLOW "ScavTrap " << _Name << " is dead, no attack possible" NC << std::endl;
		return ;
	}
	if (_Energy_point <= 0) {
		std::cout << YELLOW "ScavTrap " << _Name << " has no energy to attack, no action possible" NC <<
		std::endl;
		return ;
	}
	std::cout << YELLOW "ScavTrap " << _Name << " attacks " << target << " dealing "
	<< _Attack_damage << " points of damage !" NC << std::endl;
	_Energy_point -= 1;
}

void ScavTrap::guardGate(void) {
	std::cout << YELLOW "ScavTrap " << _Name << " entered Gate Keeper mode !" NC << std::endl;
}

ScavTrap	ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << YELLOW "Copy assignment operator called" NC << std::endl;
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_Hit_point = rhs._Hit_point;
		this->_Energy_point = rhs._Energy_point;
		this->_Attack_damage = rhs._Attack_damage;
	}
	return (*this);
}
