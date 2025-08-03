#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
using namespace std;

class Contact
{
	private:
		string firstName;
		string lastName;
		string nickName;
		string phoneNumber;
		string secretDark;

	public:
		Contact();
		void setContact(string fn, string ln, string nn, string phone, string secret);
		void displayContact();
		string getFirstName();
		string getLastName();
		string getNickName();
		string getphoneNumber();
		string getdarkSecret();
};

#endif