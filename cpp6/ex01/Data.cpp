#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() : val1(1), val2(2)
{
}

Data::Data(int a, int b) : val1(a), val2(b)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->val1 = rhs.val1;
		this->val2 = rhs.val2;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Data const & i )
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
