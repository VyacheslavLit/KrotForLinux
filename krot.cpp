#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


void pauses();

struct pos
{
	pos() {}
	pos(int x, int y):pos_x(x), pos_y(y)
	{}
	int pos_x = 0;//x, y позиция объекта на карте
	int pos_y = 0;
	bool occupancy = false;//занятость ячейки, используется для точек назначения
};

class Krot
{
	/*
	count_blok количество блоков на карте
	значение берется из файла
	изходя из этого значения выделяется память для координат блоков (blok) и точек назначения (destination_point) (их количество должно быть равным)
	*/
	int count_block;
	std::vector <pos> block;// = new pos[count_blok];
	std::vector <pos> destination_point;// = new pos[count_blok];

	pos pos_krot; //позиция крота
	int krot_map[10][10]{ 0 };
	bool completing_the_map();
	void input_error();
	void distination_to(int x, int y); //отработка движения крота
	bool the_end();
public:
	void print_map();
	void creating_map();//создание карты
	void save_map();//запись карты в файл
	bool load_map();//считывание исходных данных из файла
	void go_game();//начало игры

};
