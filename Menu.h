#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Структура Menu для представления данных о меню
struct Menu {
	string name;
	double price;
	string time;
};

// Объявление функции для создания объектов Menu из файла
vector<Menu> createObjectsFromFile(const string& filename);

// Объявление функции для вывода информации о меню
void printMenuInfo(const Menu& menu);