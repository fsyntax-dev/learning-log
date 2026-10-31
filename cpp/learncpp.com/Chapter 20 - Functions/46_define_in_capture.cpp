#include <iostream>

// you can define variable in lambda capture

int main(){
    int x {10};

    auto foo {
        [y = x + 15] (int z) {
            return y + z;
        }
    };

    std::cout << foo(4) << "\n";


    return 0;
}