#include <iostream>

// explicit constructor - tell compiler that a constructor should no be used as a converting constructor

class Num{
private:
    int m_x{};

public:
    explicit Num(int x) : m_x{x} {}
    
    int getX() const {return m_x;}
};

void printNum(Num number){
    std::cout << number.getX() << "\n";
}

int main(){

    Num x {5};

    printNum(x);

    return 0;
}