#include <iostream>

// default capture - tell compiler lambda should capture variable by default
//                 - instead of listing individually

// capture variable by value        - =
// capture variable by reference    - &

int main(){

    double height {};
    double width {};

    std::cout << "Enter height: ";
    std::cin >> height;

    std::cout << "Enter width: ";
    std::cin >> width;

    auto area {
        [=] () -> double                // capture everything in value
            {return height * width;
        }
    };

    std::cout << area() << "\n";

    return 0;
}