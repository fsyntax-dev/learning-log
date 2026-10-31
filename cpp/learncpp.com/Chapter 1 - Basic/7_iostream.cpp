#include <iostream>

int main(){

    // cout = character output (to print value)
    // cin  = character input (to gain input)
    // <<   = insertion operation
    // >>   = extraction operator

    int x = 5;

    //Buffer = Temporary Memory

    std::cout << "x is equal to " << x << std::endl;

    // std::cout store out in buffer then flush
    // endl = for output to appear immediately

    std::cout << "Hello" << "\n";
    std::cout << "World\n";

    int y{};
    std::cout << "Number: ";
    std::cin >> y;

    std::cout << "Number is " << y << "\n";



    // \n   = just a new line
    return 0;
}