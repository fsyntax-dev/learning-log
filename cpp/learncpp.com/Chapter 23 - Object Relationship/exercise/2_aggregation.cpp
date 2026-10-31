#include <iostream>

// aggregation - has a and doesn't own it
//             - implement by reference and pointer

class Num{
private:
    int m_num{};

public:
    Num() = default;
    Num(int num) : m_num{num} {
        std::cout << m_num << " created" << "\n";
    }
    ~Num() {
        std::cout << m_num << " destroyed" << "\n";
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_num;
        return out;
    }
};

class Calc{
private:
    const Num& m_x{};
    const Num& m_y{};

public:
    Calc() = default;
    Calc(const Num& x, const Num& y) : m_x{x}, m_y{y} {
        std::cout << m_x << " " << m_y << " created" << "\n";
    }
    ~Calc() {
        std::cout << m_x << " " << m_y << " destroyed" << "\n";
    }

};

int main(){

    Num x {5};
    Num y {10};

    Calc xy {x, y};

    return 0;
}