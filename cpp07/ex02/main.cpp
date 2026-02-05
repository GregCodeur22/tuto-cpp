#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	try {
		std::cout << "=== Test 1: Tableau vide ===" << std::endl;
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;

		std::cout << "\n=== Test 2: Tableau d'entiers ===" << std::endl;
		Array<int> numbers(5);
		std::cout << "Numbers array size: " << numbers.size() << std::endl;
		
		for (size_t i = 0; i < numbers.size(); ++i) {
			numbers[i] = i * 10;
		}
		
		std::cout << "Numbers: ";
		for (size_t i = 0; i < numbers.size(); ++i) {
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "\n=== Test 3: Copie d'int ===" << std::endl;
		Array<int> copy = numbers;
		std::cout << "Copy size: " << copy.size() << std::endl;
		std::cout << "Copy: ";
		for (size_t i = 0; i < copy.size(); ++i) {
			std::cout << copy[i] << " ";
		}
		std::cout << std::endl;
		

		std::cout << "\n=== Test 5: Tableau de strings ===" << std::endl;
		Array<std::string> words(3);
		words[0] = "Hello";
		words[1] = "World";
		words[2] = "!";
		
		std::cout << "Words array size: " << words.size() << std::endl;
		std::cout << "Words: ";
		for (size_t i = 0; i < words.size(); ++i) {
			std::cout << words[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "\n=== Test 7: Opérateur d'affectation ===" << std::endl;
		Array<int> arr1(3);
		arr1[0] = 1;
		arr1[1] = 2;
		arr1[2] = 3;
		
		Array<int> arr2;
		arr2 = arr1;  // Affectation
		
		std::cout << "Arr2 (après affectation): ";
		for (size_t i = 0; i < arr2.size(); ++i) {
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "\n=== Test 8: Tableau de floats ===" << std::endl;
		Array<float> floats(4);
		floats[0] = 1.5f;
		floats[1] = 2.5f;
		floats[2] = 3.5f;
		floats[3] = 4.5f;
		
		std::cout << "Floats: ";
		for (size_t i = 0; i < floats.size(); ++i) {
			std::cout << floats[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "\n=== Test 9: Tableau de chars ===" << std::endl;
		Array<char> letters(5);
		letters[0] = 'H';
		letters[1] = 'e';
		letters[2] = 'l';
		letters[3] = 'l';
		letters[4] = 'o';
		
		std::cout << "Letters: ";
		for (size_t i = 0; i < letters.size(); ++i) {
			std::cout << letters[i];
		}
		std::cout << std::endl;

		std::cout << "\n=== Test 10: Exception ===" << std::endl;
		try {
			std::cout << "Accès à l'index 10 (hors limites)..." << std::endl;
			std::cout << numbers[10] << std::endl;
		} catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n Tests terminés !" << std::endl;

	} catch (const std::exception& e) {
		std::cout << "Erreur: " << e.what() << std::endl;
	}

	return 0;
}