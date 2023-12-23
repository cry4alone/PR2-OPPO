
#include "Time.h"
#include <sstream>

void Time::read(const std::string& timeString) {
    std::istringstream iss(timeString);
    char colon; // для считывания двоеточия
    iss >> hours >> colon >> minutes;
}

void Time::write(std::ostream& out) const {
    out << hours << ":" << minutes;
}