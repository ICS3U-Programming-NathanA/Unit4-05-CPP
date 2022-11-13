// Copyright (c) 2022 Nathan A All rights reserved.
// .
// Created by: Nathan A
// Date: Nov.13, 2022
// This program asks the user for the amount of numbers they want to add up
// it then adds up the numbers they enter and display its

#include <iostream>
#include <string>

int main() {
    // Declare variables
    int totalInt = 0, userInt, sumInt = 0, wait;
    std::string totalStr = "", numStr, sumStr;

    // Asks the user for the amount of numbers they want to add together
    std::cout << "Enter the amount of numbers to enter: ";
    std::cin >> totalStr;
    std::cout << "\n";

    // Try catch to catch any errors
    try {
        totalInt = std::stoi(totalStr);
    } catch (const std::exception) {
        std::cout << "You must enter a valid integer.\n";
        std::cout << "Please restart.";
        std::cin >> wait;
    }

    // If statement to check if totalInt is a invalid input
    if (totalInt > 0) {
        while (totalInt > 0) {
            // Asks the user for a number to add to sum
            std::cout << "Enter a number to add to the sum: ";
            std::cin >> numStr;
            std::cout << "\n";

            // Try catch to catch any errors
            try {
                userInt = std::stoi(numStr);
            } catch (const std::exception) {
                std::cout << "You must enter a valid integer.\n";
                continue;
            }

            if (totalInt == 1) {
                std::cout << "Added " << userInt << " to the sum.\n";
                sumStr += numStr + " ";
                std::cout << sumStr << "\n";
                sumInt += userInt;
                totalInt--;
                continue;

                // Does not decrement totalInt
            } else if (userInt == 0) {
                std::cout << "Added 0 to the sum.\n";
                continue;

                // Checks if the user entered a negative number
            } else if (userInt < 0) {
                std::cout << "You must enter a positive number.\n";
                continue;

            } else {
                std::cout << "Added " << userInt << " to the sum.\n";
                sumStr += numStr + " + ";
                std::cout << sumStr << "\n";
                sumInt += userInt;
                totalInt--;
                continue;
            }
        }

        // If they enter a negative then it displays this
    } else {
        std::cout << "You must input more than 0 numbers to enter\n";
        std::cout << "Please restart\n";
        std::cin >> wait;
    }

    // Prints the final message and displays the equation
    std::cout << sumStr << "= ";
    std::cout << sumInt << "\n";
    std::cout << "Sum = " << sumInt << "\n";
}
