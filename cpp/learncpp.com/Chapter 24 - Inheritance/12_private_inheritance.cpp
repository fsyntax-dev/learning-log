#include <iostream>

// private inheritance   - inherited attributes (protected and public) from parent class become private in child class

class Parent{
private:
    int m_private{};
protected:
    int m_protected{};
public:
    int m_public{};

};

class Child : private Parent{
public:
    Child(){
        m_protected = 2;
        m_public = 3;        
    }
};

int main(){

    Child child {};
    child.m_protected = 1;
    child.m_public = 1;

    return 0;
}