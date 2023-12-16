#include "Menu.h"

vector<Menu> createObjectsFromFile(const string& filename) {
	vector <Menu> all;
	ifstream in(filename);

	if (!in.is_open()) {
		cout << "Opening file error" << endl;
		return all;
	}

	int i = 0;

	Menu Node;
	while (!in.eof()) {
		string str;

		// Считываем данные через пробел в строку str
		in >> str;

		// i == 0 - имя 
		if (i == 0) {
			Node.name = str;
		}

		// i == 1 - цена
		if (i == 1) {
			Node.price = stod(str);
		}

		// i == 2 - время
		if (i == 2) {
			Node.time = str;

			// Обнуляем цикл
			i = -1;

			// Добавляем узел в вектор всех Меню
			all.push_back(Node);
		}
		i++;

	}

	in.close();

	return all;
}

// Функция вывода информации об одном меню
void printMenuInfo(const Menu& menu) {
	cout << "Название: " << menu.name << endl; 
	cout << "Цена: " << menu.price << endl;
	cout << "Время приготовления: " << menu.time << endl;
	cout << endl;
}