
#include "Time.h"
#include <sstream>


void Time::write(std::ostream& out) const {
    std::string beforeHours;
    std::string beforeMinutes;

    if (hours < 10 && hours >= 0) {
        beforeHours = "0";
    }
    else {
        beforeHours = "";
    }
    if (minutes < 10 && minutes >= 0) {
        
        beforeMinutes = "0";
    }
    else {
        beforeMinutes = "";
    }    
    out  << beforeHours << hours << ":" << beforeMinutes << minutes;
    
    
}

void Time::setTime(std::istream& iss) {

    iss >> hours;
    char doubleDot = ':';
    if (doubleDot != iss.get()) { throw std::runtime_error("Нужно двоеточие"); }
    iss >> minutes;
    if (iss.fail()) { throw std::runtime_error("stream fail"); }
    checkTime();

}

void Time::checkTime() {
    if (!((-1 < hours) && (hours < 25))) { throw std::runtime_error("Неправильно указан час"); }
    if (!((-1 < minutes) && (minutes < 60))) { throw std::runtime_error("Неправильно указаны минуты"); }
}