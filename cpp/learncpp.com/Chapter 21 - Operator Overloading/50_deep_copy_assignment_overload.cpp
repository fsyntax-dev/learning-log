#include <iostream>

class Num{
private:
    int* m_x{};

public:
    Num() = default;
    Num(int x) {
        m_x = new int(x);
    }

    Num& operator=(const Num& number){
        if (this != &number){               // self assignment check
            delete m_x;                     // deallocate any value in that variable
            m_x = new int(*number.m_x);     // allocate 
        }
        return *this;                       // return object
    }

    void printAddress(){
        std::cout << m_x << "\n";
    }

};

int main(){

    Num x {10};
    Num y = x;

    x.printAddress();
    y.printAddress();

    return 0;
}