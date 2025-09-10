#include "contact.h"

Contact::Contact() {}

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string phone, std::string secret)
{
	firstName = fn;
	lastName = ln;
	nickName = nn;
	phoneNumber = phone;
	secretDark = secret;
}

void Contact::displayContact()
{
	std::cout << "FirstName = " << firstName << std::endl;
	std::cout << "LastName = " << lastName << std::endl;
	std::cout << "NickName = " << nickName << std::endl;
	std::cout << "phoneNumber = " << phoneNumber << std::endl;
	std::cout << "dark secret  = " << secretDark << std::endl;
}

std::string Contact::getFirstName()
{
	return (firstName);
}

std::string Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getNickName()
{
	return (nickName);
}

std::string Contact::getphoneNumber()
{
	return (phoneNumber);
}

std::string Contact::getdarkSecret()
{
	return (secretDark);
}
