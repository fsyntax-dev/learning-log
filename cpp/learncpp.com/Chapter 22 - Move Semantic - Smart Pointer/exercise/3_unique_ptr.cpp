#include <iostream>
#include <memory>

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {std::cout << "allocated" << "\n";}
    ~Num() {std::cout << "deallocated" << "\n";}

};


int main(){

    std::unique_ptr<Num> numOne {std::make_unique<Num>(10)};


    return 0;
}