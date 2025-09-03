#include<iostream>
using namespace std;

float x, y;
int option;

void addition() {
    std::cout << "Result: " << x + y;
}

void subtraction() {
    std::cout << "Result: " << x - y;
}

void multiplication() {
    std::cout << "Result: " << x * y;
}

void division() {

    if (y == 0) {
        std::cout << "Error: Cannot divide by zero.";
    } else {
        std::cout << "Result: " << x / y;
    }
}


void get_and_calculate_option() {
    std::cout << "Choose option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";

    // Loop until the user provides a valid input
    while (true) {
        std::cout << "Enter input here (1,2,3,4): ";
        std::cin >> option;

        if (option >= 1 && option <= 4) {
            break; // Exit the loop if the input is valid
        } else {
            std::cout << "Invalid input, please try again.\n";
        }
    }

    if (option == 1) addition();
    else if (option == 2) subtraction();
    else if (option == 3) multiplication();
    else if (option == 4) division();
}

int main() {
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    // Directly call the function that handles the options
    get_and_calculate_option();

    std::cout << std::endl; // Add a newline for clean ouput
    return 0;
}