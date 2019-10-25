// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ben Lapuhapo
// Created on: OCT
// This program gets user to input their age with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // inputs
    std::string integerAsString;
    int number = 0;
    int counter = 0;
    int total = 1;

    std::cout << "Enter a Positive (+) Number: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    try {
        number = std::stoi(integerAsString);
        do {
            std::cout <<" x " << counter << std::endl;
            counter = counter + 1;
            total = total * counter;
        } while (counter < number);
        std::cout << "Answer is: " << total << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Not A Valid Answer" << std::endl;
    }
}
