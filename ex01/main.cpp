#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
	PhoneBook phonebook;
	std::string command;
	int	index;
	std::string firstName, lastName, nickname, phoneNumber;

	do
	{
		std::cout<<"Enter command (ADD, SEARCH, EXIT): "<< std::endl;
		std::cin>> command;
		if (command == "ADD")
		{
			std::cout << "Entrez le prénom (First name) : ";
			std::cin>> firstName;
			std::cout << "Entrez le nom de famille (Last name) : ";
			std::cin>> lastName;
			std::cout << "Entrez le surnom (Nickname) : ";
			std::cin>> nickname;
			std::cout << "Entrez le numéro de téléphone (Phone number) : ";
			std::cin>> phoneNumber;
			phonebook.addContact(firstName, lastName, nickname, phoneNumber);
		}
		else if (command == "SEARCH")
		{
			std::cout << "Entrez l'index : ";
			std::cin>>index;
			phonebook.contactSearch(index);
		}
		else if (command != "EXIT")
		{
			std::cout<<"Invalid command.";
		}
	}while (command != "EXIT");



	return (0);
}