#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public :
		void announce ();
		Zombie(std::string _name);
		// Zombie(void);
		~Zombie();
	private :
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
