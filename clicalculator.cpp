#include <iostream>

int main() {
    std::cout << "Hello, There! This is my calculator I wrote in c++\n";
    int i = 1;
    while (i == 1) {
        int calculationoption = 10;
        std::cout << "option 1: addition\n";
        std::cout << "option 2: subtraction\n";
        std::cout << "option 3: multiplication\n";
        std::cout << "option 4: division\n";
        std::cout << "option 5: root\n";
        std::cout << "option 6: square root\n";
        std::cout << "What option do you want to chose";
        std::cin >> calculationoption;
    }
    return 0;
}
