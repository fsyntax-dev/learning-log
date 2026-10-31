#include <iostream>

// prefix   - no parameter
// postfix  - with parameter

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    Num& operator++();

    friend std::ostream& operator<<(std::ostream& out, const Num& number);

};

Num& Num::operator++(){
    if(m_x % 2 == 0){
        m_x *= 2;
    }
    else{
        ++m_x;        
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Num& number){
    out << number.m_x;
    return out;
}

int main(){

    Num x {10};
    Num y {11};

    std::cout << ++x << "\n";
    std::cout << ++y << "\n";


    return 0;
}