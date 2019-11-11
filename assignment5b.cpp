// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program calculates the multiplication table 0-10 of the number entered

#include <iostream>
#include <string>
    // variables
    std::string number;
    int number1;
    int counter = 0;
    int answer = 0;

int main() {
    // input
    std::cout << "Enter number to show it's multiplication table:";
    std::cin >> number;

    // loop & process & output
    try {
        number1 = std::stoi(number);

        while (counter < 11) {
            answer = counter * number1;
            std::cout << "\n";
            std::cout << counter << "x" << number1 << "=" << answer;
            counter = counter + 1;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid Input";
    }
    // default message
    std::cout << "\n";
    std::cout << "Thank you for using my program!" << std::endl;
}
