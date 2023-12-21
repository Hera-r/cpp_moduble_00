#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
public:

	std::string getFirstName() const { return first_name; }
	std::string getLastName() const { return last_name; }
	std::string getNickname() const { return nickname; }
	std::string getPhoneNumber() const { return phone_number; }

	void	setFirstName(std::string fname);
	void	setLastName(std::string lname);
	void	setNickName(std::string nname);
	void	setPhoneNumber(std::string pnumber);

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
};
#endif