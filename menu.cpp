#include "Menu.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void menu()
{
		system("clear");
		std::cout << "   ----- Меню крота -----\n";
		std::cout << "1. создание карты.\n";
		std::cout << "2. запись карты в файл.\n";
		std::cout << "3. считывание карты из файла.\n";
		std::cout << "4. игра в крота.\n";
		std::cout << "5. Показать карту.\n";
		std::cout << "0. Выход из игры.\n";
		std::cout << std::endl << "Выберите необходимый раздел: ";
}

