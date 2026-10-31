#include <iostream>

int addition(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

int division(int x, int y){
    return x / y;
}

void printResult(int sum){

    std::cout << "The output is: " << sum << "\n";
}


int main(){

    printResult(addition(5,6));
    printResult(subtract(5,6));
    printResult(multiply(5,6));
    printResult(division(5,6));
    
    return 0;
}