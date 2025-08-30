#include "Array.hpp"

//const par default 
template <typename T>
Array<T>::Array(): _data(nullptr), _size(0) {}


//constructeur creer un tableau
template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_data = new T[n]();
}


//const par copie 
template <typename T>
Array<T>::Array(const Array& rhs): _size(rhs._size)
{
	if (_size == 0)
		_data = nullptr;
	else
	{
		_data = new T[_size];
		for (size_t i = 0; i < _size; ++i)
			_data[i] = rhs._data[i];
	}
}


template <typename T>
//destructeur
Array<T>::~Array()
{
	delete[] _data;
}


//conttructeur d'assignation
template <typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= _size)
		trow std::cout_of_range("Index out of bounds");
	return _data[index];
}


template <typename T>
const T& Array<T>::operator[](size_t index) const
{
	if (index >= _size)
		trow std::cout_of_range("Index out of bounds");
	return _data[index];
}

template <typename T>
size_t Array<T>::size() const
{
	return _size;
}