#include <iostream>
#include <string>
using namespace std;

int main()
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string& stringREF = brain;

  //adresse
	cout << "adresse of brain :" << &brain << endl;
	cout << "adresse of PTR :" << stringPTR << endl;
	cout << "adresse of REF :" << &stringREF << endl;

	cout << "=========================================" << endl;

	//value
	cout << "Value of brain :" << brain << endl;
	cout << "Value of PTR :" << *stringPTR << endl;
	cout << "Value of REF :" << stringREF << endl;

	return (0);
}

