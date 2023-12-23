#pragma once


#include <iostream>
#include <string>

class Time {
public:
    int hours;
    int minutes;

    // Метод для считывания времени из строки
    void read(const std::string& timeString);

    // Метод для записи времени в поток
    void write(std::ostream& out) const;
};