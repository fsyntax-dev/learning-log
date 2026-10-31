#include <iostream>

namespace first{
    int x = 10;
}

namespace second{
    int x = 15;
}

int main() {
    // declare which namespace to use : using namespace namespace variable 
    using namespace first;

    std::cout << x << "\n";             // use first::x (10)
    std::cout << second:: x << "\n";    // use second::x (15)

    return 0;
    
}