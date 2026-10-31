#include <iostream>
#include <string>

// shallow copy - new object created with value from original object with same memory address
// no copy constructor defined - compiler gives one - and its shallow copy


class Num{
private:
    int* m_x{};

public:
    Num(int x) {
        m_x = new int(x);
    }
    ~Num(){
        delete m_x;
    }

    void printAddress(){
        std::cout << m_x << "\n";
    }

    void setNum(int x){
        *m_x = x;
    }
};

int main(){

    Num x {5};
    {
        Num y {x};
    }   // y got destroyed - free the memory
        // which affect the memory of x also

    x.setNum(5); // undefined behaviour

    return 0;
}