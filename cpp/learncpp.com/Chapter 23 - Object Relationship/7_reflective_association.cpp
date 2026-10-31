#include <iostream>

// associate            - different class interact with each other
// reflective associate - same class object interact wtih each other

class Num{
private:
    int m_num{};

public:
    Num(int x) : m_num{x} {}
    
    int getNum() const {return m_num;}

    void associate(const Num& num){
        std::cout << num.getNum() << " associate with " << m_num << "\n";
    }
};

int main(){

    Num x {10};
    Num y {15};

    x.associate(y);


    return 0;
}