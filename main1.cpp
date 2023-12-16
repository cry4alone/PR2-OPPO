#include "Menu.h"

// Функция для вывода информации о всех Меню
void displayMenuInfo(const vector<Menu>& menuObjects)
{
	for (const auto& menu : menuObjects)
	{
		printMenuInfo(menu);
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	// Имя файла с данными
	string filename = "input.txt";

	// Создание объектов Menu из файла
	vector<Menu> menuObjects = createObjectsFromFile(filename);

	// Вывод информации о всех меню
	displayMenuInfo(menuObjects);

	return 0;

}