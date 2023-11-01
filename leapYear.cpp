// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user
// for their year and it will tell them
// if it is a leap year or not with try catch

#include <iostream>
#include <string>

int main() {
    // Declare userYearAsString
    std::string userYearAsString;

    // Get the userYearAsString and display a message about the program
    std::cout << "This program will ask the user";
    std::cout << "for their year and it will tell them";
    std::cout << "if it is a leap year or not";
    std::cout << "\nEnter your year: ";
    std::cin >> userYearAsString;

    try {
        // Convert userYearAsString to int
        int userYearAsInt = std::stoi(userYearAsString);

        // Calculate remainder for leap year
        int leapYear4 = userYearAsInt % 4;
        int leapYear100 = userYearAsInt % 100;
        int leapYear400 = userYearAsInt % 400;

        // Check if it's a leap year and check if 4 leaves a remainder
        if (leapYear4 == 0) {
            if (leapYear100 != 0) {
                // check if 100 leaves a remainder
                std::cout << userYearAsInt << " is a leap year." << std::endl;
            } else {
                if (leapYear400 == 0) {
                    // check if 400 leaves a remainder
                    std::cout << userYearAsInt <<
                            " is a leap year." << std::endl;
                } else {
                    std::cout << leapYear4 <<
                            " is how many years until a leap year."
                            << std::endl;
                }
            }
        } else {
            // display that it is not a leap year
            std::cout << leapYear4 <<
                    " is how many years until a leap year." << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user year was not valid
        std::cout << userYearAsString << " is not a valid year." << std::endl;
    }
}
