#include <iostream>

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x << " ";
        return out;
    }

    Num operator++(){
        m_x *= 2;
        return *this;
    }
};

int main(){

    Num number {10};

    ++number;

    std::cout << number << "\n";

    return 0; 
}