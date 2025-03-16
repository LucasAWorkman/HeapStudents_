#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    void init(const std::string& str, const std::string& c, const std::string& s, const std::string& z) {
        street = str;
        city = c;
        state = s;
        zip = z;
    }

    void printAddress() const {
        std::cout << "Address: " << street << ", " << city << ", " << state << " " << zip << std::endl;
    }
};

#endif 

