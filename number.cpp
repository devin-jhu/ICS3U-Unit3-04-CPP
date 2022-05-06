// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The integer finder

#include <iostream>

int main() {
    // this function is a positive or negative finder
    int number;

    std::cout << "The integer finder";

    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> number;

    // process
    if (number > 0) {
        std::cout << "positive number";
    } else if (number < 0) {
        std::cout << "Negative number";
    } else {
        std::cout << "Zero";
    }
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
