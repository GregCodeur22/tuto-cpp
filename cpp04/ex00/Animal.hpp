#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
using namespace std;

class Animal
{
	protected:
		string type;

	public:
		Animal() : type("unknow")
		{
			cout << "Animal created (type : " << type << ")" << endl; 
		}

		Animal(const string& t) : type(t)
		{
			cout << "Animal created (type: " << type << ")" << endl;
		}

		virtual ~Animal()
		{
			cout << "Animal destroyed (type: " << type << ")" << endl;
		}

		virtual void makeSound() const
		{
			cout << "Animal makes some sound..." << endl;
		}

		string getType() const
		{
			return type;
		}

};



#endif