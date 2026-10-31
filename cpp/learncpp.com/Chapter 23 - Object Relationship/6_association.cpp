#include <iostream>


// association - 
//               member isn't related to class
//               member can belong to more class
//               member existance not managed by class
//               member may know class existance

// class A use class B, A associated with B

// relantionship between two different classes
// one class use other class
// but both of them doesn't own each other

class A{
private:
    int m_num{};

public:
    A(const int num) : m_num{num} {}

    int getNum() const { return m_num;}
    

};

class B{
private:
    int m_num{};

public:
    B(const int num) : m_num {num} {}
    
    void associate(const A& a){
        std::cout << a.getNum() << " associate with " << m_num << "\n";
    }
};


int main(){

    A numOne {6};
    B numTwo {7};

    numTwo.associate(numOne);

    return 0;
}