#include <iostream>

// overload increment decrement operator - use member function

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number);

    Num& operator++();
    Num& operator--();

};

Num& Num::operator++(){
    ++m_x;
    return *this;
}

Num& Num::operator--(){
    --m_x;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Num& number){
    out << number.m_x;
    return out;
}

int main(){

    Num x {10};
    Num y {10};

    ++x;
    ++x;

    std::cout << x << "\n";

    --y;
    --y;

    std::cout << y << "\n";

    return 0;
}