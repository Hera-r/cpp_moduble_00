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
		std::cin.ignore();

		if (command == "ADD")
		{
			std::cout << "Entrez le prénom (First name) : ";
			std::getline(std::cin, firstName);
			std::cout << "Entrez le nom de famille (Last name) : ";
			std::getline(std::cin, lastName);
			std::cout << "Entrez le surnom (Nickname) : ";
			std::getline(std::cin, nickname);
			std::cout << "Entrez le numéro de téléphone (Phone number) : ";
			std::getline(std::cin, phoneNumber);

			phonebook.addContact(firstName, lastName, nickname, phoneNumber);
		}
		else if (command == "SEARCH")
		{
			std::cout << "Entrez l'index : ";
			std::cin>>index;
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
			{
				phonebook.contactSearch(index);
			}
		}
	}while (command != "EXIT");



	return (0);
}