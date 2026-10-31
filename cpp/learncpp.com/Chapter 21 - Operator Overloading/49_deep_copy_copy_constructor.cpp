#include <iostream>

// deep copy is the solution for shallow copy

// deep copy - allocate memory for copy and copy the value
//           - copy has distinct memory from the source
//           - copy not affect the source
//           - write our own copy constructor

// copy constructor - just allocated new memory allocation

class Num{
private:
    int* m_x{};

public:
    Num() = default;
    Num(int x){
        m_x = new int(x);
    }
    
    Num(const Num& x){
        m_x = new int(*x.m_x);
    }

    void printAddress(){
        std::cout << m_x << "\n";
    }

};

int main(){

    Num x {10};
    Num y {x};

    x.printAddress();
    y.printAddress();

    
    return 0;
}