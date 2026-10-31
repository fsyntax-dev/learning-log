#include <iostream>

// destructor - allow class to do clean up befire an object is destroyed
//            - gives act of control when object dies

// destructor - function that run when object destroyed
//            - get called when class object destroyed

// destructor definition rules
//      1. prefix with tilde ~
//      2. don't have arguments
//      3. has no return type

// a class only has single destructor

class Num{
private:
    int m_x{};
public:
    int getID() const {return m_x;}
    void setID(int x) {m_x = x;} 

    Num() = default;
    Num(int id) : m_x{id} {                            // Constructor
        std::cout << "Constructing Num" << m_x <<"\n";
    }
    ~Num() {                                            // Destructor
        std::cout << "Destructing Num" << m_x <<"\n";
    }
};

int main(){

    Num numberOne{1};
    {
        Num numberTwo{2};
    }   // numberTwo destroyed here
        // once object numberTwo get destroyed it will call destructor


    return 0;
}       // numberOne destroyed here
        // once object numberOne get destroyed it will call destructor