#include <iostream>

int main(){

    [[maybe_unused]] double pi {3.14159};
    [[maybe_unused]] double gravity {9.8};
    [[maybe_unused]] double phi {1.61803};

    std :: cout << pi << "\n";
    std :: cout << phi << "\n";

    // [[maybe_unused]] an attribute to avoid terminal warn about unused variable
    return 0;
}