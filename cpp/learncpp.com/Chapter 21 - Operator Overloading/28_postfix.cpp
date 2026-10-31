#include <iostream>

// prefix  - no parameter
// postfix - with parameter

// postfix definition only work when prefix is define

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;  
    };

    Num& operator++();
    Num operator++(int);
};

Num& Num::operator++(){
    ++m_x;
    return *this;
}

Num Num::operator++(int){
    Num temp{*this};        // this code doesn't work if prefix doesn't define
    ++(*this);
    return temp;
}

void prefix(Num& number){
    std::cout << ++number << "\n";
}

void postfix(Num& number){
    std::cout << number++ << "\n";
}

void printNum(const Num& number){
    std::cout << number << "\n";
}

int main(){

    Num x {10};
    Num y {10};

    prefix(x);

    postfix(y);
    printNum(y);

    return 0;
}

