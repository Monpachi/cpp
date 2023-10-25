#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

class Data
{

	public:

		Data();
		Data( int a, int b );
		~Data();

		Data &		operator=( Data const & rhs );

		int val1;
		int val2;
	private:

};

// std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */
