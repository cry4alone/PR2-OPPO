#include "Menu.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

void Menu::read(const std::string& menuString) {
    std::istringstream iss(menuString);



    iss >> name;
    checkName();
    price.setPrice(iss);
    time.setTime(iss);
}

void Menu::checkName() {
    std::string letters = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";


    for (auto it = name.begin(); it != name.end(); ++it) {
        char currentChar = *it;

        size_t foundIndex = letters.find(currentChar);

        if (foundIndex == std::string::npos) {
            throw std::runtime_error("Неверные символы в имени");
        }
    }
}

void Menu::write(std::ostream& out) const {
    out << "Название: " << name << std::endl;
    out << "Цена: ";
    price.writePrice(out);
    out << "Время приготовления: ";
    time.write(out);
    out << std::endl << std::endl;
}


std::vector<Menu> createObjectsFromFile(std::istream &in) {
    std::vector<Menu> all;
      
    std::string line;
    while (std::getline(in, line)) {
        Menu menu;
        menu.read(line);
        all.push_back(menu);
    }

    return all;
}