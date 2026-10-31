#include <iostream>


int main() 
{
    char operators;
    double num1;
    double num2;
    double answer;

    std::cout << "**********Calculator**********\n";

    std::cout << "Enter arithmetic  operation (+ - * / %): ";
    std::cin >> operators;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (operators)
    {
    case '+':
        answer = num1 + num2;
        std::cout << "Answer: " << answer << "\n";
        break;

    case '-':
        answer = num1 - num2;
        std::cout << "Answer: " << answer << "\n";
        break;

    case '*':
        answer = num1 * num2;
        std::cout << "Answer: " << answer << "\n";
        break;
    
    case '/':
        answer = num1 / num2;
        std::cout << "Answer: " << answer << "\n";
        break;
    
    default:
        std::cout << "Invalid Operator" << "\n";
    }

    std::cout << "******************************";

    return 0;
    
}