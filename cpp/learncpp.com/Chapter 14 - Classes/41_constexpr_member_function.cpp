#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};

public:
    constexpr Num (int x, int y) : m_x{x}, m_y{y} {}
    
    constexpr int checkNum() const {
        return m_x > m_y ? m_x : m_y;
    }

};


int main(){

    constexpr Num valueA{5,10};
         
    
    constexpr int valueB{valueA.checkNum()};
    std::cout << valueB << "\n";
                                    


    return 0;
}