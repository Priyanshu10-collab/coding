#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Splitting the input string into words
    std::istringstream iss(input);
    std::string word;
    std::string reversed = "";

    while (iss >> word) {
        if (!reversed.empty()) {
            reversed = " " + reversed;
        }
        reversed = word + reversed;
    }

    std::cout << "Reversed string with spaces: " << reversed << std::endl;

    return 0;
}
