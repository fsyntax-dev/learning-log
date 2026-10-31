#include <iostream>

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}
    Num(Num& x) : m_x{x.m_x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    }

    Num& operator=(const Num& number){
        m_x = number.m_x;
        return *this;
    }

};

int main(){

    Num x {5};
    Num y {10};
    Num z {15};

    x = y = z;

    std::cout << x << "\n";


    return 0;
}