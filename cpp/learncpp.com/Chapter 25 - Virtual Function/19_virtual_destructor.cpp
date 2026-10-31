#include <iostream>

class Parent{
public:
    Parent() {std::cout << "Parent::Parent()" << "\n";}
    virtual ~Parent() {std::cout << "Parent::~Parent()" << "\n";}
};

class Child : public Parent{
private:
    int* m_array{};

public:
    Child(int length) : m_array{new int [length]} {
        std::cout << "Child::Child()" << "\n";
    }
    ~Child() {
        std::cout << "Child::~Child()" << "\n";
        delete[] m_array;
    }
};

int main(){

    Child* child{new Child(5)}; 
    Parent* parent{child};          // polymorph

    delete parent;

    // parent adalah Parent Pointer - kalau delete look for virtual destructor
    //                              - kalau tak virtual only delete parent

    return 0;
}

// Rule - inheritance desutrctor must be explicitly virtual

// when destructor doesn't marked as virtual - risk of leak memory