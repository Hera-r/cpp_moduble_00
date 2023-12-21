#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
public:
	PhoneBook();
	void	addContact(std::string fname, std::string lname, std::string nickname, std:: string pnumber);
	void	contactSearch(int index);

private:
	Contact contact[8];
	int i;
	std::string	formatAndTruncate(std::string str);
};
#endif