#include "Span.hpp"

const char *Span::NoNumber::what() const throw() {
	return ("Not enough Number.");
}

Span::Span() : _StockSpan(0), _N(0){
}

Span::Span(unsigned int N) : _StockSpan(0), _N(N) {
}

Span::Span( const Span & src ) {
	*this = src;
}

Span::~Span() {
	;
}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs._N;
		this->_StockSpan = rhs._StockSpan;
	}
	return *this;
}


void Span::addNumber(int n) {
	(this)->_StockSpan.push_back(n);
}

unsigned int	Span::longestSpan() const{
	if (this->_N <= 1)
		throw NoNumber();
	return (*std::max_element(_StockSpan.begin(), _StockSpan.end()) - *std::min_element(_StockSpan.begin(), _StockSpan.end()));
}
