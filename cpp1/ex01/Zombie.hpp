#ifndef ZOMBIE_H
# define ZOMBIE_H
																							
# include <iostream>

class Zombie
{
	public :
		void announce ();
		Zombie();
		Zombie(std::string _name);
		~Zombie();
		void set_name(std::string _name);
	private :
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name );

#endif
