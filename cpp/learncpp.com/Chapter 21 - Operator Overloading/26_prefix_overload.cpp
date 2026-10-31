#include <iostream>

// prefix - no parameter

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    }

    Num& operator++(){
        ++m_x;
        return *this;
    }
};

int main(){

    Num x {10};

    for(int i {0}; i < 5; ++i){
        std::cout << ++x << "\t";
    }

    return 0;
}