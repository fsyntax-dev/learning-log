#include <iostream>

// pre  ++x --x do thing first, then assign = new value
// post x++ x-- assign first, then do thing = old value

int main(){

    int x{5};
    int valueA{++x};
    int valueB{x++};

    int y{10};
    int valueC{--y};
    int valueD{y--};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";

    std::cout << valueC << "\n";
    std::cout << valueD << "\n";

    return 0;
}