#include <iostream>


// postfix - only copy value and increase that original
//         - increment after assigning

int main(){

    int x{5};
    int y{x++};

    std::cout << x << "\n";
    std::cout << y << "\n";

    return 0;
}