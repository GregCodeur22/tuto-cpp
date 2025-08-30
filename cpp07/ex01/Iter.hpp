#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

//modifie
template <typename T, typename F>
void iter(T* array, size_t lenght, F func)
{
	for (size_t i = 0; i < lenght; ++i)
	{
		func(array[i]);
	}
}

//lecteur
template <typename T, typename F>
void iter(const T* array, size_t lenght, F func)
{
	for (size_t i = 0; i < lenght; i++)
	{
		func(array[i]);
	}
}

#endif