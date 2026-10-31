#include <iostream>

bool isEqual(int x, int y){

    return x == y;

}

int main(){

    int x{};
    int y{};

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    std::cout << std::boolalpha;
    std::cout << isEqual(x, y) << "\n";

    return 0;
}