#include <iostream>
#include <memory>

template <typename T>
std::ostream& operator<<(std::ostream& out, std::unique_ptr<T>& ptr){
    out << ptr.get();
    return out;
}

template <typename T>
void printPtr(std::unique_ptr<T>& ptr){
    static int index {0};
    ++index;

    std::cout << "Pointer " << index << ": " << ptr << "\n";
    std::cout << "Content " << index << ": " << *ptr << "\n";
    std::cout << "\n";
}

int main(){

    std::unique_ptr<int> numOne {std::make_unique<int>(10)};    // numOne own address1

    printPtr(numOne); 

    std::unique_ptr<int> numTwo {std::move(numOne)};            // numTwo steal addrress1 from numOne

    
    printPtr(numTwo);

    return 0;
}

// A initialize address
// B steal address A
// A become nullptr
// When program tried to access A, throws exception