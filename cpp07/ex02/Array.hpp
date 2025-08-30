#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T* _data;
		size_t _size;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& rhs);
		
		//destructeur ici
		~Array();
		Array &operator=(const Array &rhs);
  
		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t size() const;
};

#endif