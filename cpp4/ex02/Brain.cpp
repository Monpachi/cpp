#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Constructor brain called" << std::endl;
}

Brain::Brain(const Brain & src) {
	std::cout << "Constructor copy Brain " << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src.getIdea(i);
}

Brain::~Brain(){
	std::cout << "Destructor Brain Called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs.getIdea(i);
	return *this;
}

std::string Brain::getIdea(int i) const {
	return (_ideas[i]);
}

void Brain::setIdea(int i, std::string idea) {
	_ideas[i] = idea;
}
