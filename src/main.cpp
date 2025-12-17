/*
 * Interactive CLI Greeting Tool
 * 
 * Description: A simple C++ program that demonstrates basic input/output
 *              operations by greeting the user with their name.
 * 
 * Author: Ian
 * Date: December 2025
 * Purpose: Capstone Project - C++ CLI Fundamentals
 * 
 * Compilation: g++ main.cpp -o greeting
 * Execution: ./greeting
 */

#include <iostream>  // For input/output operations (cin, cout)
#include <string>    // For string data type

int main() {
    // Declare a string variable to store the user's name
    std::string name;

    // Display welcome message
    std::cout << "==================================" << std::endl;
    std::cout << "  C++ CLI Greeting Tool" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << std::endl;

    // Prompt user for input
    std::cout << "Enter your name: ";
    
    // Read the entire line of input (handles spaces in names)
    std::getline(std::cin, name);

    // Validate that the user entered something
    if (name.empty()) {
        std::cout << "You didn't enter a name, but hello anyway!" << std::endl;
    } else {
        // Display personalized greeting
        std::cout << std::endl;
        std::cout << "Hello, " << name << "! Welcome to C++ CLI programming." << std::endl;
        std::cout << std::endl;
        std::cout << "You've successfully compiled and run your first C++ program!" << std::endl;
    }

    std::cout << "==================================" << std::endl;

    // Return 0 to indicate successful program termination
    return 0;
}
