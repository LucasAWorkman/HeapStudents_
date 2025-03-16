#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    Address address;
    Date birthDate;
    Date gradDate;
    int credits;

public:
    void init(const std::string& studentString) {
        std::stringstream ss(studentString);
        std::string street, city, state, zip, birth, grad;
        char comma;

        std::getline(ss, firstName, ',');
        std::getline(ss, lastName, ',');
        std::getline(ss, street, ',');
        std::getline(ss, city, ',');
        std::getline(ss, state, ',');
        std::getline(ss, zip, ',');

        std::getline(ss, birth, ',');
        std::getline(ss, grad, ',');

        ss >> credits;

        address.init(street, city, state, zip);
        birthDate.init(birth);
        gradDate.init(grad);
    }

    void printStudent() const {
        std::cout << "Student Name: " << firstName << " " << lastName << std::endl;
        address.printAddress();
        birthDate.printDate();
        gradDate.printDate();
        std::cout << "Credits: " << credits << std::endl;
    }

    std::string getLastFirst() const {
        return lastName + ", " + firstName;
    }
};

#endif 

