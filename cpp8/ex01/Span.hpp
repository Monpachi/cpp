#pragma once

# include <iostream>
# include <iomanip>
# include <vector>
# include <cstdlib>
# include <stdexcept>
# include <algorithm>

class Span {
	public :
		Span();
		Span(unsigned int N);
		Span(Span const & src );
		~Span();

		class NoNumber: public std::exception {
			virtual const char *what() const throw();
		};

		Span &	operator=(Span const & rhs );
		void			addNumber(int i);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

	private :
		std::vector<int>	_StockSpan;
		unsigned int		_N;
};
