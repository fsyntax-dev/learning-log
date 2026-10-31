#include <iostream>
#include <functional>

// lambda dont have a normal type that can explicitly to use
// compiler generate unique type just for lambda
// type to use for lambda is auto or std::function

// prefer to use auto
// std::function - will implicitlly convert when the function call with this type
//               - will cost performance overhead 

int main(){
    
    std::function add {
                        [] (double x, double y) {
                            return x  + y;
                        }
    };

    auto subtract {
                        [] (int x, int y) {
                            return x - y;
                        }
    };

    std::cout << add(5,5) << "\n";
    std::cout << subtract(10,5) << "\n";

    return 0;
}