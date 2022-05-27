// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <random>
#include <array>
#include <iostream>


template<size_t N>
int LowestNumberCalculator(std::array<int, N> array) {
    // this functions is to get largest number in an array

    int lowestNumber = array[0];

    for (int number : array) {
        if (lowestNumber > number) {
            lowestNumber = number;
        }
    }

    return lowestNumber;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int randNum = 0;
    int lowestNumber = 0;


    // input
    std::cout << "The numbers are: " << std::endl;
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randNum = idist(rgen);
        randomNumbers[loop_counter] = randNum;
        std::cout << randNum << std::endl;
    }
    std::cout << " " << std::endl;

    lowestNumber = LowestNumberCalculator(randomNumbers);

    std::cout << "The lowest number is: "
    << lowestNumber << std::endl;
    std::cout << std::endl;
    std::cout << "Done.";
}
