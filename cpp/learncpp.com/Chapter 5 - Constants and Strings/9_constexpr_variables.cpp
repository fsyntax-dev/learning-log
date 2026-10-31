#include <iostream>

// constexpr    - object can be used in a constant expression
// const        - value can't be changed after initialization

int main(){

    constexpr double pi {3.14};
    constexpr int sum {4 + 5};

    return 0;
}