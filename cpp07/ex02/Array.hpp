#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <sstream>

template <typename T>
class Array
{
	private:
		T* _data;
		size_t _size;
	
	public:
		Array() : _data(NULL), _size(0) {}
		
		Array(unsigned int n) : _size(n)
		{
			if (n == 0)
				_data = NULL;
			else
				_data = new T[n](); 
		}
		
		Array(const Array& rhs) : _size(rhs._size)
		{
			if (_size == 0)
				_data = NULL;
			else
			{
				_data = new T[_size];
				for (size_t i = 0; i < _size; ++i)
					_data[i] = rhs._data[i];
			}
		}
		
		~Array()
		{
			delete[] _data;
		}
		
		Array &operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				delete[] _data;
				_size = rhs._size;
				if (_size == 0)
					_data = NULL;
				else
				{
					_data = new T[_size];
					for (size_t i = 0; i < _size; ++i)
						_data[i] = rhs._data[i];
				}
			}
			return *this;
		}
		
	// Opérateur d'accès
	T& operator[](size_t index)
	{
		if (index >= _size)
		{
			std::ostringstream oss;
			oss << "Index " << index << " out of bounds (size: " << _size << ")";
			throw std::out_of_range(oss.str());
		}
		return _data[index];
	}
	
	// Opérateur d'accès const
	const T& operator[](size_t index) const
	{
		if (index >= _size)
		{
			std::ostringstream oss;
			oss << "Index " << index << " out of bounds (size: " << _size << ")";
			throw std::out_of_range(oss.str());
		}
		return _data[index];
	}

	
	// Fonction size
	size_t size() const
	{
		return _size;
	}
};

#endif