#pragma once


#include <iostream>
#include <string>

class Time {
public:
    int hours;
    int minutes;

    // ����� ��� ������ ������� � �����
    void write(std::ostream& out) const;

    void setTime(std::istream& iss);

    void checkTime();
};