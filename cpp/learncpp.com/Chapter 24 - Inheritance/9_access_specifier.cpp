#include <iostream>

// private      - can access in the same class and friend
// protected    - can access in the same class, other class and friend (e.g Parent with Child)
// public       - can be access by everybody and everywhere

class Parent{
private:
    int m_x{};

protected:
    int m_y{};

public:
    int m_z{};

};

class Child : public Parent{
public:
    Child(){
    //  m_x = 1;    // private     
        m_y = 2;    // protected
        m_z = 3;    // public
    }        
};

int main(){

    Parent num {};

    num.m_z = 10;


    return 0;
}

// when to use protected?
// in parent class for child to inherit it
// protected is used with the purpose to inherit

// best practice to make it private, only protected when inherit