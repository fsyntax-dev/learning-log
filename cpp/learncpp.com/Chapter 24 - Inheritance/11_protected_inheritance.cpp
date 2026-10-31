#include <iostream>

// protected inheritance - inherited attribute (protected and public) from parent class become protected in child class


class Parent{
private:
    int m_private{};
protected:
    int m_protected{};
public:
    int m_public{};   

};

class Child : protected Parent{
public:
    Child(){
        // m_private = 1;
        m_protected = 2;
        m_public = 3;                        
    }
};

int main(){

    Parent parent {};
    parent.m_public = 1;

    Child child {};
    child.m_public = 1;

    return 0;
}