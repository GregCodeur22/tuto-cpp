#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secretDark;

	public:
		Contact();
		void setContact(std::string fn, std::string ln, std::string nn, std::string phone, std::string secret);
		void displayContact();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getphoneNumber();
		std::string getdarkSecret();
};

#endif