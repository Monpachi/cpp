#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		~ClapTrap(void);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap operator=(ClapTrap const &rhs);

		std::string getName(void) const;
		int			getPv(void) const;
		int			getEnergy(void) const;
		int			getAttack(void) const;

    private:
        std::string	_Name;
		int			_Hit_point;
		int			_Energy_point;
		int			_Attack_damage;
};

std::ostream &operator<<( std::ostream &out, ClapTrap const &fixed);

#endif
