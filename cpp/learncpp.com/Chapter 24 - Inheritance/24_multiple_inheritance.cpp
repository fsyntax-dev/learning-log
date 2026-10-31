#include <iostream>

// multiple inheritance - a child class can inherit multiple parent

class Parent{
private:
    int m_x{};

public:
    Parent(int x) : m_x{x} {}
    
    friend std::ostream& operator<<(std::ostream& out, const Parent& num){
        out << num.m_x;
        return out;
    }
};

class StepParent{
private:
    int m_y{};

public:
    StepParent(int y) : m_y{y} {} 

    friend std::ostream& operator<<(std::ostream& out, const StepParent& num){
        out << num.m_y;
        return out;
    }
};

class Child : public Parent, public StepParent{
private:
    int m_z{};
public:
    Child(int x, int y, int z) : Parent{x}, StepParent{y}, m_z{z} {}

    friend std::ostream& operator<<(std::ostream& out, const Child& num){
        out << static_cast<const Parent&>(num)      << " " 
            << static_cast<const StepParent&>(num)  << " "
            << static_cast<const Child&>(num).m_z;
        return out;
    }
};

int main(){

    Child child {10,15,20};

    std::cout << child << "\n";
    return 0;
}

// problem with multiple inheritence
//      + multiple parent that inherited by child have the same attribute name