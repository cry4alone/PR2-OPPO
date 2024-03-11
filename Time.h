#pragma once


#include <iostream>
#include <string>

class Time {
public:
    int hours;
    int minutes;

    // Метод для записи времени в поток
    void write(std::ostream& out) const;

    void setTime(std::istream& iss);

    void checkTime();
};