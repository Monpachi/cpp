#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>


# define WHITE "\e[0m"
# define BLACK "\e[0;30m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define BLUE "\e[0;34m"
# define PURPLE "\e[0;35m"
# define CYAN "\e[0;36m"

# define BWHITE "\e[1m"
# define BGRAY "\e[1;29m"
# define BBLACK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGREEN "\e[1;32m"
# define BYELLOW "\e[1;33m"
# define BBLUE "\e[1;34m"
# define BPURPLE "\e[1;35m"
# define BCYAN "\e[1;36m"
# define NC "\e[0m"

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

    protected :
        std::string	_Name;
		int			_Hit_point;
		int			_Energy_point;
		int			_Attack_damage;
};

// std::ostream &operator<<( std::ostream &out, ClapTrap const &fixed);

#endif
