#include <iostream>


int main(){

    auto add = [](int x, int y) {
        return x + y;
    };

    std::cout << add(3,4) << "\n";

    return 0;
}