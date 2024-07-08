#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	index = 0;
};

PhoneBook::~PhoneBook(){

};

void add(PhoneBook myPhoneBook)
{
	std::string fName;
	std::string lName;
	std::string nick;
	std::string phn;
	std::string dsec;

	system("clear");
	std::cout << "First Name    : ";
	std::cin >> fName;
	std::cout << "Last Name     : ";
	std::cin >> lName;
	std::cout << "Nickname      : ";
	std::cin >> nick;
	std::cout << "Phone Number  : ";
	std::cin >> phn;
	std::cout << "Darkest Secret: ";
	std::cin >> dsec;

	if (fName.empty())
		fName = "Unknown";
	if (nick.empty())
		nick = "N/A";
	if (phn.empty())
		nick = "N/A";
	if (dsec.empty())
		nick = "No secrets to reveal";

	myPhoneBook.addContact(fName, lName, nick, phn, dsec);
}

void search(PhoneBook myPhoneBook)
{
	// Search
}

int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	PhoneBook myPhoneBook;
	std::string comm;
	std::string var;
	int c = 0;

	while (c != 3)
	{
		std::cout << "┌---------------------------------┐" << std::endl;
		std::cout << "| Welcome to My Awesome PhoneBook |" << std::endl;
		std::cout << "|           ―――――――――――           |" << std::endl;
		std::cout << "├---------------------------------┤" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "| Available actions:              |" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "| • ADD                           |" << std::endl;
		std::cout << "| • SEARCH                        |" << std::endl;
		std::cout << "| • EXIT                          |" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "└---------------------------------┘" << std::endl;
		std::cout << " > ";
		std::cin >> comm;

		if (comm == "ADD")
			c = 1;
		else if (comm == "SEARCH")
			c = 2;
		else if (comm == "EXIT")
			c = 3;

		switch (c) {
			case 1:
				std::clog << "Used command \"ADD\"" << std::endl;
				add(myPhoneBook);
				break;
			case 2:
				std::clog << "Used command \"SEARCH\"" << std::endl;
				break;
			case 3:
				std::clog << "Used command \"EXIT\"" << std::endl;
				break;
			default:
				std::cerr << "\nWrong input!" << std::endl;
				break;
		}
		system("clear");
	}
	std::cout << "\nProgram will exit." << std::endl;
	return (0);
}
