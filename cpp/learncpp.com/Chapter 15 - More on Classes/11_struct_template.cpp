#include <iostream>

template <typename T>
struct Pair{
    T first{};
    T second{};
};

int main(){

    Pair<int> pairOne{5, 6};
    Pair<double> pairTwo{5.50, 6.50};

    std::cout << sizeof(pairOne) << "\t" << sizeof(pairTwo) << "\n";

    return 0;
}