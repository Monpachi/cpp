#pragma once

# include <iostream>
# include <iomanip>
# include <vector>
# include <cstdlib>
# include <stdexcept>
# include <algorithm>
template<typename T>
int	easyfind(T	vint, int number) {
	std::vector<int>::iterator it;
	it = find(vint.begin(), vint.end(), number);
	if (it != vint.end())
		return (*it);
	throw std::logic_error("No occurence found");
}
