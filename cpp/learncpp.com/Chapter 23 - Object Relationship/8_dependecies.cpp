#include <iostream>

// dependecies - a object reliant on another object
//             - class depend on something that unrelated to class/not defined by class

// associate    - class related to it defined member
// dependancy   - class unrelated to its non member

class Num{
private:
    int m_x{};
    int m_y{};

public:
    Num(int x, int y) : m_x{x}, m_y{y} {}
    
    // std::ostream is external from the class
    // class depend to std::ostream
    friend std::ostream& operator<<(std::ostream& out, const Num& num); 
};

    std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_x << " " << num.m_y;
        return out;
}

int main(){

    Num x {5,10};

    std::cout << x << "\n";


    return 0;
}