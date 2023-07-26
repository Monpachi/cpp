#ifndef Cat_H
# define Cat_H

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &		operator=( Cat const & rhs );
		void makeSound(void) const;
		Cat & operator=(Cat & rhs);
};

#endif
