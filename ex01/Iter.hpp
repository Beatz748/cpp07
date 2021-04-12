#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void iter(T *arr, const int & len, void (*f)(const T &arg))
{
	int	i = 0;

	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

#endif
