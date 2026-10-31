#include <iostream>

class Num{
private:
    int m_num{};

public:
    Num() = default;
    Num(int num) : m_num{num} {};

    Num operator+(const int value);
};

Num Num::operator+(const int value){
    return Num{m_num + value};
}

int main(){


    return 0;
}