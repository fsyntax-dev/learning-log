#include <iostream>

// Copy Constructor - create new object as copy of exisitng object

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x {x} {
        std::cout << x << "\t";
        std::cout << "Original Constructor - Called" << "\n";
    }

    Num(const Num& x) {
        std::cout << x.m_x << "\t";
        std::cout << "Copy Constructor - Called" << "\n"; 
    }
};

int main(){

    Num x {5};
    Num {x};

    return 0;
}