#include <iostream>

int getValue(){                         //function to get input

    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int doubleNumber(int x){                //function to double the input

    int sum{x * 2};
    return sum;
}

void printNumber(int value){            //function to print the result

    std::cout << "The number is: " << value << "\n";
}
int main(){

    printNumber(doubleNumber(getValue()));   //called function

    return 0;
}