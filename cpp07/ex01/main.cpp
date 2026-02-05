#include <iostream>
#include <string>
#include "Iter.hpp"

/* ---------- Fonctions classiques ---------- */

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

void printChar(const char &c)
{
	std::cout << c << " ";
}

/* ---------- Fonction TEMPLATE ---------- */

template <typename T>
void printTemplate(const T &x)
{
	std::cout << x << " ";
}

template <typename T>
void doubleValue(T &x)
{
	x *= 2;
}

int main()
{
	/* ===== TEST 1 : tableau int non const ===== */

	int numbers[] = {1, 2, 3, 4, 5};
	size_t n = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "Int original: ";
	iter(numbers, n, printTemplate<int>);
	std::cout << std::endl;

	iter(numbers, n, increment);
	std::cout << "Int incremented: ";
	iter(numbers, n, printInt);
	std::cout << std::endl;

	iter(numbers, n, doubleValue<int>);
	std::cout << "Int doubled (template): ";
	iter(numbers, n, printTemplate<int>);
	std::cout << std::endl << std::endl;

	/* ===== TEST 2 : tableau const int ===== */

	const int constNumbers[] = {10, 20, 30};
	size_t cn = sizeof(constNumbers) / sizeof(constNumbers[0]);

	std::cout << "Const int: ";
	iter(numbers, n, increment);
	iter(numbers, n, doubleValue<int>);
	iter(constNumbers, cn, printTemplate<int>);
	std::cout << std::endl << std::endl;

	/* ===== TEST 3 : tableau string const ===== */

	const std::string words[] = {"hello", "world", "iter"};
	size_t w = sizeof(words) / sizeof(words[0]);

	std::cout << "Const string: ";
	iter(words, w, printString);
	std::cout << std::endl << std::endl;
	iter(words, w, printTemplate<std::string>);
	std::cout << std::endl << std::endl;

	/* ===== TEST 4 : tableau char ===== */

	char letters[] = {'a', 'b', 'c', 'd'};
	size_t l = sizeof(letters) / sizeof(letters[0]);

	std::cout << "Char array: ";
	iter(letters, l, printChar);
	std::cout << std::endl << std::endl;

	/* ===== TEST 5 : tableau float + fonction template ===== */

	float floats[] = {1.5f, 2.5f, 3.5f};
	size_t f = sizeof(floats) / sizeof(floats[0]);

	std::cout << "Float original: ";
	iter(floats, f, printTemplate<float>);
	std::cout << std::endl;

	iter(floats, f, doubleValue<float>);
	std::cout << "Float doubled: ";
	iter(floats, f, printTemplate<float>);
	std::cout << std::endl;
}
