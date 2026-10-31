#include <iostream>

namespace constantHeight{
    constexpr int minHeight(140);
    constexpr int maxHeight(200);
}

int main(){

    int height{};
    std::cout << "Enter your height: ";
    std::cin >> height;

    if (height <= constantHeight::minHeight){
        std::cout << "Too Short!" << "\n";
    }
    else if (height >= constantHeight::maxHeight){
        std::cout << "Too Tall!" << "\n";
    }
    else{
        std::cout << "Eligible!" << "\n";
    }

    return 0;
}