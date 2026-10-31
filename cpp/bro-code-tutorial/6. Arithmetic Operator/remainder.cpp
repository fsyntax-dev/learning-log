#include <iostream>

int main() {

    int students = 31;
    students = students % 2;

    int workers = 31;
    workers %= 2;

    std::cout << students << "\n";
    std::cout << workers << "\n";
    
    
    return 0;
    
}