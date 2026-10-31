#include <iostream>

// scoped enums - access enums with scope operator ::
// to make scoped enums by enum class enum_name

enum class Fruit{
    banana,
    apple,
    grape,
};

int main(){

    Fruit x {Fruit::banana};

    std::cout << static_cast<int>(x) << "\n";

    return 0;
}