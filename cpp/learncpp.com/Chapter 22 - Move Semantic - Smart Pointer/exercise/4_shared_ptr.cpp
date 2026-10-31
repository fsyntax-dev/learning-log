#include <iostream>
#include <memory>

// std::shared_ptr - multiple smart pointer shared same memory address
//                 - assign will increase owner of memory

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {std::cout << "allocated" << "\n";}
    ~Num() {std::cout << "deallocated" << "\n";}     

    
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::shared_ptr<T>& ptr){
    out << ptr.get();
    return out;
}

template <typename T>
void printPtr(std::shared_ptr<T> ptr){
    static int index {0};
    ++index;
    std::cout << "var " << index << ": " << ptr << "\n";
}

int main(){

    std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
    std::shared_ptr<Num> numTwo {numOne};

    printPtr(numOne);
    printPtr(numTwo);

    {
        std::shared_ptr<Num> numThree {numOne};
        printPtr(numThree);
        std::cout << numOne.use_count() << "\n";
    }

    std::cout << numOne.use_count() << "\n";


    return 0;
}