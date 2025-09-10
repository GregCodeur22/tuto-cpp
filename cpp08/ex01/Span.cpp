#include "Span.hpp"

Span::Span() : store(0) {}
Span::Span(unsigned int N) : store(N) {}
Span::Span(const Span &rhs) : store(rhs.store), numbers(rhs.numbers) {}
Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		store = rhs.store;
		numbers = rhs.numbers;
	}
	return *this;
}
Span::~Span() {}

void Span::addNumber(int nb)
{
	if (numbers.size() >= store)
		throw std::length_error("Span is full");
	numbers.push_back(nb);
}

unsigned int Span::shortesSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enought numbers");
	std::vector<int> tmp = numbers;
	std::sort(tmp.begin(), tmp.end());

	unsigned int minSpan = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; ++i)
	{
		unsigned int span = tmp[i + 1] - tmp[i];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

unsigned int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("not enought numbers");

	int minVal = *std::min_element(numbers.begin(), numbers.end());
	int maxVal = *std::max_element(numbers.begin(), numbers.end());
	return maxVal - minVal;
}