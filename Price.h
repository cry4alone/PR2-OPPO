#pragma once

#include <iostream>
#include <string>

class Price {
public:
    int intPart;
    int floatPart;

    // Метод для записи времени в поток
    void writePrice(std::ostream& out) const;

    // Метод для записи времени в поток
    void setPrice(std::istream& iss);

    void checkPrice();
};