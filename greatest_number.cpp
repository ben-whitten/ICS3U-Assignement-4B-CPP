// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you the greatest number.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what runs the program.
    int numberOne;
    int numberTwo;
    int numberThree;
    std::string numberOneAsString;
    std::string numberTwoAsString;
    std::string numberThreeAsString;

    // input
        std::cout << "Input the first number: ";
        std::cin >> numberOneAsString;
        std::cout << std::endl;
        std::cout << "Input the second number: ";
        std::cin >> numberTwoAsString;
        std::cout << std::endl;
        std::cout << "Input the third number: ";
        std::cin >> numberThreeAsString;
        std::cout << std::endl;

    // Process
    try {
        numberOne = std::stoi(numberOneAsString);
        numberTwo = std::stoi(numberTwoAsString);
        numberThree = std::stoi(numberThreeAsString);

        if ((numberOne > numberTwo) &&
            (numberOne > numberThree)) {
            std::cout << "number 1 is the greatest. (" << numberOne <<
            ")" << std::endl;
        } else if ((numberTwo > numberOne) &&
                   (numberTwo > numberThree)) {
            std::cout << "number 2 is the greatest. (" << numberTwo <<
            ")" << std::endl;
        } else if ((numberThree > numberOne) &&
                   (numberThree > numberTwo)) {
            std::cout << "number 3 is the greatest. (" << numberThree <<
            ")" << std::endl;
        } else if ((numberOne == numberTwo) &&
                   (numberOne > numberThree)) {
            std::cout << "number 1 and 2 is the greatest." << std::endl;
        } else if ((numberOne == numberThree) &&
                   (numberOne > numberTwo)) {
            std::cout << "number 1 and 3 is the greatest." << std::endl;
        } else if ((numberTwo == numberThree) &&
                   (numberTwo > numberOne)) {
            std::cout << "number 2 and 3 is the greatest." << std::endl;
        } else if ((numberOne == numberTwo) &&
                   (numberOne == numberThree)) {
            std::cout << "They are all equal." << std::endl;
                }
    } catch(std::invalid_argument) {
        std::cout << "One or more of those where invalid numbers." << std::endl;
    }
}
