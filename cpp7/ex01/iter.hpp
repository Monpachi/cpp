#pragma once

# include <iostream>
# include <iomanip>

template<typename T, typename F>
void	iter(T *tab, std::size_t size, void(*f)(F&)) {
	for (std::size_t i = 0; i < size; i++) {
	f(tab[i]);
	}
}
