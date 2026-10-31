#include <iostream>

char getOperator(){
    while(true){                                                    // infinite loop until it                                  
        char operation{};
        std::cout << "Enter Operator (+ - * /): ";
        std::cin >> operation;

        switch(operation){
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;                                   // return char then exit 
            default:
                std::cout << "Invalid Input! Try Again." << "\n";
        }
    }
}

int main(){



    return 0;
}