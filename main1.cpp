#include "Menu.h"

int main() {
    setlocale(LC_ALL, "Russian");

    // Имя файла с данными
    std::string filename = "input.txt";

    // Создание объектов Menu из файла
    std::vector<Menu> menuObjects = createObjectsFromFile(filename);

    // Вывод информации о всех меню
    for (const auto& menu : menuObjects) {
        menu.write(std::cout);
    }

    return 0;
}