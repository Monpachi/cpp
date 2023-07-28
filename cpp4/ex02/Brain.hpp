#ifndef Brain_H
# define Brain_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Brain {
	public :
		Brain();
		Brain(Brain const & src);
		~Brain();
		Brain &		operator=( Brain const & rhs );
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
	protected :
		std::string _ideas[100];
};

#endif
