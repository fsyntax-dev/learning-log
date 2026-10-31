#include <iostream>

// deep copy - allocated memory for copied value
         

class Num{
private:
    int* m_x{};

public:
    Num(int x) {
        m_x = new int(x);
    }
    
    Num(const Num& number){
        m_x = new int(*number.m_x);         // allocated new memory for copy
    }

    Num& operator=(const Num& number){
        if(this != &number){                // self assignment check
            delete m_x;                        
            m_x = new int(*number.m_x);
        }
        return *this;
    }

    void printAddress() const {
        std::cout << m_x << "\n";
    }

    void print() const {
        std::cout << *m_x << "\n";
    }

    int setNum(int x){
        return *m_x = x;     
    }

    int getNum() const {
        return *m_x;
    }
};

int main(){

    Num x {10};
    Num y {x};

    x.printAddress();
    y.printAddress();


    return 0;
}