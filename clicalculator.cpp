#include <cmath>
#include <iostream>
#include <math.h>

int option = 0;

//The menu telling the user which number correlates to what arithmetic oparation
void showmenu(){
    std::cout << "option 1: addition\n"
              << "option 2: subtraction\n"
              << "option 3: multiplication\n"
              << "option 4: division\n"
              << "option 5: root\n"
              << "option 6: square root\n"
              << "option 7: exit\n"
              << "What option do you want to chose ";
}
//The double variables a and b are for the numbers for the arithmetic operations
double a, b;

//This is the input for all of the arithmetic operations
void input() {
    if (option != 6) { // square root only needs one number
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;
    } else {
        std::cout << "Enter number: ";
        std::cin >> a;
    }
}

//All of the functions for all of the arithmetic oparations including addition subtraction division multiplication root and square root
void addition() {
    double c;
    c = a + b;
    std::cout << c;
}

void subtraction(){
    double c;
    c = a - b;
    std::cout << c;
}

void multiplication(){
    double c;
    c = a * b;
    std::cout << c;
}

void division(){
    double c;
    c = a / b;
    std::cout << c;
}

void root(){
    double c;
    c = a / a;
    std::cout << c;
}

void sqroot(){
    double c;
    c = sqrt(a);
    std::cout << c;
}

//int main for all of the initlization
int main() {
    std::cout << "Hello, There! This is my calculator I wrote in c++\n";
    showmenu();
    std::cin >> option;
    switch (option)
    {
    case 1:
        std::cout << "addition selected\n";
        input();
        addition();
    case 2:
        std::cout << "subtraction selected\n";
        input();
        subtraction();
        break;
    case 3:
        std::cout << "multiplication selected\n";
        input();
        multiplication();
    case 4:
        std::cout << "division selected\n";
        input();
        division();
    case 5:
        std::cout << "root selected\n";
        input();
        root();
    case 6:
        std::cout << "square root selected\n";
        input();
        sqroot();
    case 7:
        std::cout << "exiting...\n";
        break;
    default:
        break;

    return 0;
    }
}