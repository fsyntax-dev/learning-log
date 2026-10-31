#include <iostream>

int main(){
    // character output buffer
    // program << ram << output
    // << for insertion value

    
    // character input also buffer
    // input >> ram >> program
    // >> for extraction input

    std::cout << "Enter a number: ";

    int x {};
    std::cin >> x;

    std::cout << "Number is: " << x << "\n";

    return 0;
}