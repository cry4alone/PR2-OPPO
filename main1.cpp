#include "Menu.h"
#include <fstream>


int main() {
    setlocale(LC_ALL, "Russian");


    std::ifstream in("input.txt");

    if (!in.is_open())
    {
        std::cout << "Файл не открыт" << std::endl;
    }

    try {
  
        // Создание объектов Menu из файла
        std::vector<Menu> menuObjects = createObjectsFromFile(in);

        // Вывод информации о всех меню
        for (const auto& menu : menuObjects) {
            menu.write(std::cout);
        }

    }
    catch(std::runtime_error& err) {
        std::cout << err.what() << std::endl;
    }

    in.close();


    return 0;
}