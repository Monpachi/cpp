#pragma once

# include <iostream>
# include <iomanip>

template<typename T>
void	swap(T &a, T &b){
	T r;
	r = a;
	a = b;
	b = r;
}

template<typename T>
T	&min(T &a, T &b){
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	&max(T &a, T &b){
	if (a > b)
		return (a);
	return (b);
}
