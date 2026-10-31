#include <iostream>

// memory organized into byte and has unique address
// amount of memory depends on data types
// 1 byte = 8 bits
// 2^n = total object value
// int = 4 bytes = 4bytes x 8bits = 32 bits = 2^32 = 4,294,967,296
// sizeoff() is an operator that measure object size
int main(){

    int valueA{};

    char valueB{};

    float valueC{};

    double valueD{};
    
    bool valueE{};

    int valueF{4294967296};             // exceed 2,147,483,648

    std::cout << sizeof(valueA) << "\n";
    std::cout << sizeof(valueB) << "\n";
    std::cout << sizeof(valueC) << "\n";
    std::cout << sizeof(valueD) << "\n";
    std::cout << sizeof(valueE) << "\n";
    
    std::cout << sizeof(valueF) << "\n";
    std::cout << valueF << "\n";        // error bcs exceed 2^32

    return 0;
}