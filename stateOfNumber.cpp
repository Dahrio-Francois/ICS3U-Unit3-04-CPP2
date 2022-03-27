// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: March 2022
// This program tells you what state the number is in
//      with user input

#include <iostream>


int main() {
    // this function makes the program
    int integer;

    // input
    std::cout << "Enter your integer: ";
    std::cin >> integer;

    // process
    if (integer < 0) {
        std::cout << "This number is negative!" << std::endl;
        std::cout << "\nDone" << std::endl;
    } else if (integer > 0) {
        std::cout << "This number is positive!" << std::endl;
        std::cout << "\nDone" << std::endl;
    } else {
        std::cout << "This number is zero!" << std::endl;
        std::cout << "\nDone" << std::endl;
    }
}
