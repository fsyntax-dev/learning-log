#include <iostream>

// reflective association - a class interact with itself - kinda talking to itself

class Num{
private:
    int m_num{};

public:
    Num() = default;
    Num(int num) : m_num{num} {}
    
    int getNum() const {return m_num;}

    void reflective(const Num& num){
        std::cout << num.getNum() << "\n";
    }
};

int main(){


    return 0;
}