#include <iostream>
// coditional operator - ?:
// also known as ternary operator 
// shorter if else statement
// (condition) ? value_if_true : value_if_false


int getValue(){

    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

int main(){

    int x{getValue()};
    int y{getValue()};
    int compare {( x > y) ? x : y};
    std::cout << compare << "\n";

    return 0;
}