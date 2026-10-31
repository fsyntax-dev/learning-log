#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {};

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    }

    Num& operator++();
};

Num& Num::operator++(){
    ++m_x;
    return *this;
}

int main(){

    Num x {10};

    std::cout << ++x << "\n";
    std::cout << ++x << "\n";
    std::cout << ++x << "\n";
    std::cout << ++x << "\n";
    std::cout << ++x << "\n";

    return 0;
}