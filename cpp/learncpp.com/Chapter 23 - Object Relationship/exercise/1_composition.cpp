#include <iostream>

// object composition - a class use another class as member

//                      composition - by value
//                      aggregation - by reference or pointer


// composition - has a and own it
//             - implement by value

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
    // use it by value
    // if use as reference means it aggregation
    Num m_x{};  
    Num m_y{};

public:
    Calc(const Num& x,const Num& y) : m_x{x}, m_y{y} {
        std::cout << m_x << ", " << m_y << " created" << "\n";
    }

    ~Calc(){
        std::cout << m_x << ", " << m_y << " destroyed" << "\n";
    }

};

int main(){

    Num x {5};
    Num y {10};

    Calc xy{x, y};


    return 0;
}