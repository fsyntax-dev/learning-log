#include <iostream>

// constructor - special member function that called non aggregate class type
//             - shouldn't be const
//             - designed to initialize an entire object

// naming constructor - must have same name with class
//                    - have no return type


struct NumXY{           // struct is an aggregate
    int x{};            // member variable can use aggregate initialization
    int y{};
};

class NumAB{            // class isn't an aggregate
private:
    int m_a{};          // member variable can't use aggregate initialization
    int m_b{};

public:
    NumAB(int a, int b){
        std::cout << a << " " << b << "\n";
    }

};

int main(){

    NumXY xy{6, 6};     // struct aggregate initialization
    NumAB ab{7, 7};     // constructor
    NumAB ac{1, true};  // constructor implicit conversion bool to int

    std::cout << xy.x << " " << xy.y << "\n";

    return 0;
}