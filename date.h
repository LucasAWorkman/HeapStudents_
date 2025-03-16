#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
private:
    std::string date;

public:
    void init(const std::string& dateStr) {
        date = dateStr;
    }

    void printDate() const {
        std::cout << "Date: " << date << std::endl;
    }
};

#endif

