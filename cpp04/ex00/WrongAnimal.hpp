#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
using namespace std;

class WrongAnimal
{
	protected:
		string type;

	public:
		WrongAnimal() : type("unknow")
		{
			cout << "Animal created (type : " << type << ")" << endl; 
		}

		WrongAnimal(const string& t) : type(t)
		{
			cout << "Animal created (type: " << type << ")" << endl;
		}

		virtual ~WrongAnimal()
		{
			cout << "Animal destroyed (type: " << type << ")" << endl;
		}

		void makeSound() const
		{
			cout << "Animal makes some sound..." << endl;
		}

		string getType() const
		{
			return type;
		}

};



#endif