#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Time.h"
#include "Price.h"

class Menu {
public:
    std::string name;
    Price price;
    Time time;

    // Метод для считывания меню из строки
    void read(const std::string& menuString);

    // Метод для записи меню в поток
    void write(std::ostream& out) const;


    void checkName();

    
};

// Функция для создания объектов Menu из файла
std::vector<Menu> createObjectsFromFile(std::istream &in);