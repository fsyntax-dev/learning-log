#include <iostream>

// delete keyword = to disable from using

class Num{
    
private:
    int m_x{};
    int m_y{};

public:

    Num() = delete;
    Num(int x, int y) : m_x{x}, m_y{y} {}

    void checkNum() {
        std::cout << "Max: " << (m_x > m_y ? m_x : m_y) << "\n";
    }

    void printNum(){
        std::cout << m_x << " " << m_y << "\n";
    }
};

int main(){


    return 0;
}