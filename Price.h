#pragma once

#include <iostream>
#include <string>

class Price {
public:
    int intPart;
    int floatPart;

    // ����� ��� ������ ������� � �����
    void writePrice(std::ostream& out) const;

    // ����� ��� ������ ������� � �����
    void setPrice(std::istream& iss);

    void checkPrice();
};