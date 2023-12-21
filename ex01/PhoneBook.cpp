#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0) {}
void PhoneBook::addContact(std::string fname, std::string lname, std::string nickname, std:: string pnumber)
{
	if (i <= 8)
	{
		contact[i].setFirstName(fname);
		contact[i].setLastName(lname);
		contact[i].setNickName(nickname);
		contact[i].setPhoneNumber(pnumber);
		i++;
	}
	else
	{
		contact[0].setFirstName(fname);
		contact[0].setLastName(lname);
		contact[0].setNickName(nickname);
		contact[0].setPhoneNumber(pnumber);
	}
}

void	PhoneBook::contactSearch(int index)
{
	if (index >= 0 && index <= 8)
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << "First Name" << "|";
		std::cout << std::setw(10) << std::setfill(' ') << std::right << "Last Name" << "|" <<std::endl;
		std::cout << std::setw(10) << std::setfill(' ')<< std::left <<formatAndTruncate(contact[index].getFirstName()) << "|";
		std::cout << std::setw(10) << std::setfill(' ')<< std::left <<formatAndTruncate(contact[index].getLastName()) << "|";
		std::cout << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout<<"Error Index "<<std::endl;
	}
}

std::string	PhoneBook::formatAndTruncate(std::string str)
{
	std::string new_str = str;
	if (new_str.length() >= 10)
	{
		new_str = new_str.substr(0, 10 - 1) + ".";
	}
	return new_str;
}
