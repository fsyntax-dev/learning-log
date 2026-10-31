#include <iostream>

int getValue(){                         //function to retrieve input
                                        //as arguement for another function
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printResult(int value){            //calculate input

    std::cout << "the value is: " << value * 2 << "\n";
}

int main(){

    printResult(getValue());

    return 0;
}