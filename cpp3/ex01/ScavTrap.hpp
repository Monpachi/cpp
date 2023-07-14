#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &trap);
		~ScavTrap(void);
		void 		attack(const std::string &target);
		ScavTrap	operator=(ScavTrap const &rhs);
		void		guardGate(void);

};

#endif
