#include <iostream>

// shallow copy - create new object with value the same address
//              - created using copy constructor or overloaded operator=
//              - if copy constructor not defined - compiler provide and it perform shallow copy

class Num{
private:
    int* m_x{};

public:
    Num() = default;
    Num(int x) {
        m_x = new int(x);
    }

    void printAddress() const {
        std::cout << m_x << "\n";
    }
    
};

int main(){

    Num x {5};
    Num y {x};

    x.printAddress();
    y.printAddress();

    return 0;
}
