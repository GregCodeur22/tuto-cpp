#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <stdexcept>
#include <iterator>

class Span
{
private:
	unsigned int store;
	std::vector<int> numbers;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &rhs);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(int nb);
	unsigned int shortesSpan();
	unsigned int longestSpan();

	template <typename inputIt>
	void addMoreNumber(inputIt begin, inputIt end)
	{
		if (static_cast<unsigned long>(std::distance(begin, end)) > store - numbers.size())
			throw std::length_error("Too low capacity");
		numbers.insert(numbers.end(), begin, end);
	}
};

#endif