#include "Price.h"

#include <sstream>




void Price::writePrice(std::ostream& out) const {
    out << intPart << "." << floatPart << std::endl;
}


void Price::setPrice(std::istream& iss) {
    

    iss >> intPart;
    char dot = '.';
    if (dot != iss.get()) { throw std::runtime_error("Нужна точка в цене"); }
    iss >> floatPart;
    if (iss.fail()) { throw std::runtime_error("stream fail"); }
    checkPrice();

}

void Price::checkPrice() {
    if (!((intPart >= 0) && (floatPart >= 0))) { throw std::runtime_error("Неправильно указана цена"); }
}