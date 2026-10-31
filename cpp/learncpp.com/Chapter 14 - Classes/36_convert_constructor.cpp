#include <iostream>

// explicit keywords - prevent impilicit conversion

class Dollar{
private:
    int m_dollars{};
public:
    int getDollar() const {return m_dollars;}

    explicit Dollar(int d) : m_dollars{d} {}    // can't convert any type to Dollar
};

void print(Dollar dollar){
    std::cout << dollar.getDollar();
}

int main(){

    print(5);                                   // pass by literal - compile error 

                                                // explicitly define class Dollar object
    print(Dollar {5});                          // pass by direct initialization - compiled 
    print(static_cast<Dollar>(5));              // explicitly cast 

    return 0;
}