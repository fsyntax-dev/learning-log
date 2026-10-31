#include <iostream>

int main(){

    std::cout << "Enter three number: 4, 5, and 6: " << "\n";

    //zero initialize
    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z;

    std::cout << "You have entered: " << x  << ", " << y << ",and " << z << "\n";

    return 0;
}