#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) {
	std::cout << "Constructor void Clap called" << std::endl;
	_Name = "NoName";
	_Hit_point = 10;
	_Energy_point = 10;
	_Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constuctor string Clap called " << name << std::endl;
	_Name = name;
	_Hit_point = 10;
	_Energy_point = 10;
	_Attack_damage = 0;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor Clap called " << _Name << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_Hit_point <= 0) {
		std::cout << "Claptrap " << _Name << " got his corpse hit again but can't get damage" << std::endl;
		return ;
	}
	_Hit_point -= amount;
	if (_Hit_point <= 0) {
		std::cout << "Claptrap " << _Name << " is dead" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _Name << " loses " << amount << " Pv" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount) {
	if (_Hit_point <= 0) {
		std::cout << "Claptrap " << _Name << " is just a corpse, he can't use repair spell" << std::endl;
		return ;
	}
	if (_Energy_point <= 0) {
		std::cout << "Claptrap " << _Name << " has not energy to cast 'Repair'" << std::endl;
		return ;
	}
	_Energy_point -= 1;
	_Hit_point += amount;
	std::cout << "ClapTrap " << _Name << " regain " << amount << " pv(s)" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_Hit_point <= 0) {
		std::cout << "ClapTrap " << _Name << " is dead, no attack possible" << std::endl;
		return ;
	}
	if (_Energy_point <= 0) {
		std::cout << "ClapTrap " << _Name << " has no energy to attack, no action possible" <<
		std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _Name << " attacks " << target << " dealing "
	<< _Attack_damage << " points of damage !" << std::endl;
	_Energy_point -= 1;
}

std::string ClapTrap::getName() const {
	return (_Name);
}

int ClapTrap::getPv(void) const {
	return (_Hit_point);
}

int ClapTrap::getEnergy() const {
	return (_Energy_point);
}

int ClapTrap::getAttack() const {
	return (_Attack_damage);
}

ClapTrap	ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = rhs.getName();
	this->_Hit_point = rhs.getPv();
	this->_Energy_point = rhs.getEnergy();
	this->_Attack_damage = rhs.getAttack();
	return (*this);
}
