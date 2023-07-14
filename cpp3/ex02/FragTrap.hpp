#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &trap);
		~FragTrap(void);
		FragTrap	operator=(FragTrap const &rhs);
		void		highFivesGuys(void);

};

#endif
