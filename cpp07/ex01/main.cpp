#include <iostream>
#include <string>
#include "Iter.hpp"

void printInt(const int &x)
{
	std::cout << x << " ";
}

void increment(int &x)
{
	x += 1;
}

void printString(const std::string &s)
{
	std::cout << s << " ";
}

int main()
{

	//------------test sans s=cont -------------------

	int number[] = {1, 2, 3, 4, 5};
	size_t n = sizeof(number) / sizeof(number[0]);

	std::cout << "Original numbers: ";
	iter(number, n, printInt);
	std::cout << std::endl;
	iter(number, n, increment);
	std::cout << "After increment: ";
	iter(number, n, printInt);
	std::cout << std::endl;

	//-----------test avec le tableau const --------------

	const std::string word[] = {"hello", "world", "test"};
	size_t w = sizeof(word) / sizeof(word[0]);

	std::cout << "Const word: ";
	iter(word, w, printString);
	std::cout << std::endl;

}