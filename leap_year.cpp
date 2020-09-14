// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program checks if a year is a leap year

#include <iostream>

int main() {
    // This function checks if a year is a leap year
    int year;

    // Input
    std::cout << "Please enter the year: ";
    std::cin >> year;
    std::cout << "" << std::endl;

    // Process
    if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    // Output
                    std::cout << "The year "
                    << std::fixed << year << " is a leap year (366 Days)!"
                    << std::endl;
                } else {
                    std::cout << "The year "
                    << std::fixed << year << " is not a leap year (365 Days)!"
                    << std::endl;
                }
            } else {
                std::cout << "The year "
                << std::fixed << year << " is a leap year (366 Days)!"
                << std::endl;
            }
    } else {
        std::cout << "The year "
        << std::fixed << year << " is not a leap year (365 Days)!" << std::endl;
    }
}
