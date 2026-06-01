//
//  main.cpp
//  LoanCalculator
//
//  Created by Alejandro Toledo on 6/1/26.
//

#include <iostream>
#include <string>
#include <stdlib.h>

void clearXcodeConsole();

int main() {
    std::string input = "blank";
    
    while (input != "quit") {
        std::cout << "====================\n";
        std::cout << "WELCOME TO THE LOAN CALCULATOR! Type in the matching number or 'quit' to exit the program\n";
        std::cout << "(3) QUIT PROGRAM\n";
        std::cin >> input;
        
        if (input == "quit") {
            std::cout << "\n";
            break;
        }
    }
    std::cout << "Exiting program. Have a great day!\n";
    return 0;
}

//void clearXcodeConsole() {
//    // Prints 100 empty lines to push old data out of view
//    std::cout << std::string(100, '\n') << std::endl;
//}


// while app is running
// options
// - add loan
// - remove loan
// - generate plan
// - quit
