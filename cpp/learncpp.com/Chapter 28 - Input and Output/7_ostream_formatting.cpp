#include <iostream>

int main(){

    // default
    std::cout << true << " " << false << "\n";

    // flag
    std::cout.setf(std::ios::boolalpha);
    std::cout << true << " " << false << "\n";

    // manipulator
    std::cout << std::noboolalpha << true << " " << false << "\n";
    std::cout << std::boolalpha << true << " " << false << "\n";



    return 0;
}