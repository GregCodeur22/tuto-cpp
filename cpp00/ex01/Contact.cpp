#include "contact.h"

Contact::Contact() {}

void Contact::setContact(string fn, string ln, string nn, string phone, string secret)
{
	firstName = fn;
	lastName = ln;
	nickName = nn;
	phoneNumber = phone;
	secretDark = secret;
}

void Contact::displayContact()
{
	cout << "FirstName = " << firstName << endl;
	cout << "LastName = " << lastName << endl;
	cout << "NickName = " << nickName << endl;
	cout << "phoneNumber = " << phoneNumber << endl;
	cout << "dark secret  = " << secretDark << endl;
}

string Contact::getFirstName()
{
	return (firstName);
}
string Contact::getLastName()
{
	return (lastName);
}

string Contact::getNickName()
{
	return (nickName);
}

string Contact::getphoneNumber()
{
	return (phoneNumber);
}

string Contact::getdarkSecret()
{
	return (secretDark);
}
