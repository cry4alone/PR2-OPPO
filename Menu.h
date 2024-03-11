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

    // ����� ��� ���������� ���� �� ������
    void read(const std::string& menuString);

    // ����� ��� ������ ���� � �����
    void write(std::ostream& out) const;


    void checkName();

    
};

// ������� ��� �������� �������� Menu �� �����
std::vector<Menu> createObjectsFromFile(std::istream &in);