#include <iostream>

int readNumber(){

    int input{};
    std::cout << "Please enter an integer: ";
    std::cin >> input;
    return input;
}

void writeAnswer(int input){
    std::cout << "The number is: " << input << "\n";
}

int main(){

   int num{readNumber()};
   writeAnswer(num);


    return 0;
}