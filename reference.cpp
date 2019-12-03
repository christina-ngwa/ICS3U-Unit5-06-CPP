// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program rounds numbers with user input

#include <iostream>
#include <cmath>
#include <string>

float Rounding(float &deci, int deciPlace) {
    // This function rounds the user's number

    // Process
    deci = (deci * pow(10, deciPlace) + 0.5);
    deci = static_cast<int>(deci);
    deci = deci / pow(10, deciPlace);
}


int main() {
    // This function gets user's input and shows rounded input

    // Variables
    std::string deciAsString;
    std::string deciPlaceAsString;
    float deci;
    int deciPlace;

    std::cout << "Welcome to rounding calculator." << std::endl;
    std::cout << std::endl;
    // Process
    std::cout << "Enter a decimal: ";
    std::cin >> deciAsString;
    try {
        deci = std::stof(deciAsString);
        std::cout << "Enter desired decimal places to round to: ";
        std::cin >> deciPlaceAsString;
        try {
            deciPlace = std::stoi(deciPlaceAsString);
            Rounding(deci, deciPlace);
            std::cout << "" << std::endl;
            std::cout << "Rounded number: " << deci << std::endl;
        } catch (std::invalid_argument) {
            std::cout << "Wrong input. Try again." << std::endl; }
    } catch (std::invalid_argument) {
            std::cout << "Wrong input. Try again." << std::endl; }
}
