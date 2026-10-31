#include <iostream>

// inside member function - this (const pointer) hold the address of current implicit object
// it happens implicitly, but can mention this-> explicitly

class Simple{
private:
    int m_id{};
public:
    Simple(int id) : m_id{id} {}

    int getID() const {return m_id;}
    void setID(int id) {m_id = id;}

    void print() const {std::cout << m_id;}
};

int main(){

    Simple simple{1};
    simple.setID(2);        // implicit object simple 
                            // code knws setID should operate on object simple       
                            // setID refer to int id -> int id refer to int m_id -> simple.m_id
                            // the answer: it use hidden pointer named "this"

    return 0;
}