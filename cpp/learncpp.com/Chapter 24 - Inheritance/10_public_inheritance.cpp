#include <iostream>

// inheritance has three different ways
//      default - private - when not declare access specifier
//      private
//      protected
//      public


// public inheritance -
//                      m_private isn't accessible
//                      m_protected stay protected
//                      m_public stay public

// public inheritance - inherited attribute (public) from parent class are public in child class

class Parent{
private:
    int m_private{};
protected:
    int m_protected{};
public:
    int m_public{};        
};

class Child : public Parent{
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