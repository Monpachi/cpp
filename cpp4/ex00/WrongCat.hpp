#ifndef WrongCat_H
# define WrongCat_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();
		WrongCat &		operator=( WrongCat const & rhs );
		void makeSound(void) const;
		WrongCat & operator=(WrongCat & rhs);
};

#endif
