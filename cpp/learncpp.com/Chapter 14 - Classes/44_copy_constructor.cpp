#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num(int x) : m_x{x} {
        std::cout << x << " - Original" << "\n";
    }

    Num(const Num& x) {
        std::cout << x.m_x << " - Copy" << "\n";
    }
};

int main(){

    Num x {5};      // x create new object
    Num y {x};      // y copy exisitng object of x


    return 0;
}