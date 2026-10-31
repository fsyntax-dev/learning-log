#include <iostream>

// Copy elision - compiler optimization technique 
//                compiler to remove unnecessary copying of objects

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {
        std::cout << "Normal Constructor" << "\n";
    }

    Num(const Num& number) : m_x{number.m_x}{
        std::cout << "Copy Constructor" << "\n";
    }

    void print() const {
        std::cout << "Number: " << m_x << "\n";
    }
};

int main(){

    Num valueA{Num {5}}; // notice un unnecessary object here
                         // compiler can rewrite statement to optimize it
                         // the process call copy elision
    

    return 0;
}