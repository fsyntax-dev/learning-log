#include <iostream>
using namespace std;

int chooseOperator(char input, int a, int b){
    if(input == '+'){
        return a + b;
    }
    else if(input == '-'){
        return a - b;
    }
    else if(input == '*'){
        return a * b;
    }
    else if(input == '/'){
        if(b == 0){
            cout << "Error! Division by zero." << endl;
            return 0; // Returning 0 to handle division error
        }
        return a / b;
    }
    else {
        cout << "Invalid Operator!" << endl;
        return 0;
    }
}

int main() 
{
    int a, b;
    char operators;

    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter Operator (+ - * /): ";
    cin >> operators;

    int result = chooseOperator(operators, a, b);
    cout << "Result: " << result << endl;  // Display the output

    return 0;
}
