#ifndef WrongCat_H
# define WrongCat_H

#include "WrongAnimal.hpp"
#include <string.h>
#include <iostream>

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();
		void makeSound(void) const;
		WrongCat & operator=(WrongCat & rhs);
};

#endif
