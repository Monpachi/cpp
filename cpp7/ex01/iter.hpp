#pragma once

# include <iostream>
# include <iomanip>

template<typename T>
void	iter(T *tab, std::size_t size, void(*f)(T&)) {
	for (std::size_t i = 0; i < size; i++) {
	f(tab[i]);
	}
}
