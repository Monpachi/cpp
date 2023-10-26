#pragma once

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <time.h>
# include <string>

#define MAX_VAL 10
template<typename T>
class Array {
	public :
		Array() {
			_size = 0;
			_array = NULL;
		}
		Array(unsigned int n) {
			if (n == 0)
				_array = NULL;
			else
				_array = new T[n]();
			_size = n;
		}
		unsigned int size() const {
				return (_size);
		}
		Array(Array const &src) {
			_array = new T[src.size()]();
			_size = src.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
		}
		~Array() {
			delete[] _array;
		}
		Array & operator=(Array<T>const &rhs) {
			if (this != &rhs)
			{
				delete[] _array;
				_array = new T[rhs.size()]();
				_size = rhs.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		};
		T &		operator[]( unsigned int index ) {
			if (index >= _size)
				throw std::overflow_error("index out of range");
			return (_array[index]);
		};
	private :
		unsigned int	_size;
		T				*_array;
};
