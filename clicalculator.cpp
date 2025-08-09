#include <iostream>

int option = 10;

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

//This is the input for all of the arithmetic oparations
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

//int main for all of the initlization
int main() {
    std::cout << "Hello, There! This is my calculator I wrote in c++\n";
    showmenu();
    int mainloop = 1;
    while (mainloop == 1) {
        std::cin >> option;
        if (option == 1) {
            std::cout << "addition selected\n";
            input();
            addition();
        }
        if (option == 2) {
            std::cout << "subtraction selected\n";
            input();
            subtraction();
        }
        if (option == 3) {
            std::cout << "multiplication selected\n";
            input();
            multiplication();
        }
        if (option == 4) {
            std::cout << "division selected\n";
            input();
            division();
        }
    return 0;
    }
}
