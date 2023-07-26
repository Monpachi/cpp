#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(Dog const & src);
		~Dog();
		Dog & operator=( Dog const & rhs );
		void makeSound(void) const;
		Dog & operator=(Dog & rhs);
		Brain *getBrain() const;
	private :
		Brain *_brain;
};

#endif
