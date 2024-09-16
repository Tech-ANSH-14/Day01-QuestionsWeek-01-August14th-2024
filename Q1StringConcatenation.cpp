#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString;

    // to enter the first string
    std::cout << "Enter the first string: ";
    std::getline(std::cin, firstString); //to allow spaces in the input

    //to enter the second string
    std::cout << "Enter the second string: ";
    std::getline(std::cin, secondString);

    std::string concatenatedString = firstString + secondString;

    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    return 0;
}
