#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(int integer);
		Fixed(float floater);
		Fixed(Fixed const & src);
		~Fixed();

	Fixed & operator=(Fixed const & rhs);

	int toInt(void)const;
	float toFloat(void)const;
	int getRawBits(void)const;
	void setRawBits(int const raw);

	private:
		int	_val;
		static const int _val_const = 8;
};

std::ostream &	operator<<( std::ostream & out, Fixed const & fixed);

#endif
