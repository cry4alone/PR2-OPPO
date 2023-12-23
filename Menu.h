#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Time.h"

class Menu {
public:
    std::string name;
    double price;
    Time time;

    // Метод для считывания меню из строки
    void read(const std::string& menuString);

    // Метод для записи меню в поток
    void write(std::ostream& out) const;
};

// Функция для создания объектов Menu из файла
std::vector<Menu> createObjectsFromFile(const std::string& filename);