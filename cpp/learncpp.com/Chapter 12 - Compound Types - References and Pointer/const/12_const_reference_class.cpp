#include <iostream>

class NumX{
private:
    int m_x{};
public:
    const int& getX() const {return m_x;}

    // const int& getX()    = can't change the value via reference    - return reference read only
    // const {return m_x;}  = can't change the value, kinda safeguard - "this function doesnt modify object"

    // binding const reference to const object

    int& get() {return m_x;}

};

int main(){

    

    return 0;
}