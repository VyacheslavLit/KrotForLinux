#include <iostream>
#include <locale>
#include "krot.h"
#include "Menu.h"
using namespace std;

int main()
{
	locale ru("ru_RU.utf8");
    Krot krot;
	while (true)
	{
		menu();
		std::string choice;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Выбор не определен, повторите попытку.\n";
			pauses();
			continue;
		}
		if (choice[0] == '1') krot.creating_map();
		if (choice[0] == '2') krot.save_map();
		if (choice[0] == '3') krot.load_map();
		if (choice[0] == '4') krot.go_game();
		if (choice[0] == '5')
		{
			system("clear");
			krot.print_map();
			pauses();
		}
		if (choice[0] == '0') break;

	}

	return 0;
}
