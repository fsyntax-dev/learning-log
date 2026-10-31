#include <iostream>

// a function can be friend with more than one class at one time

class NumY;                                             // forward declaration of NumY

class NumX{
private:
    int m_x{};
public:
    NumX(int x) : m_x{x} {}

    friend void print(const NumX& x, const NumY& y);   //  so NumY can be used here
};

class NumY{
private:
    int m_y{};
public:
    NumY(int y) : m_y{y} {}

    friend void print(const NumX& x, const NumY& y);
};

void print(const NumX& x, const NumY& y){
    std::cout << "X: " << x.m_x << "\t"
              << "Y: " << y.m_y << "\n";
}

int main(){

    NumX valueA {5};
    NumY valueB {6};

    print(valueA, valueB);

    return 0;
}