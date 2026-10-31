#include <iostream>

// non member function - function that exist outside class 
//                     - function doesn't belong to class

// if non member function want to access private member of class - use "friend" keywords
// friend - give access to private member


class Num{
private:
    int m_x{};
public:
    Num(int x) : m_x{x} {}

    friend void showX(const Num& obj);              // declaration of friend function
};

void showX(const Num& obj){
    std::cout << "Private: " << obj.m_x << "\n";    // definition of friend function
}

int main(){

    Num valueA{5};
    
    showX(valueA);
    // basically valueA.m_x


    return 0;
}

// 1. Create friend of class - declare inside class 
// 2. Create friend function - define outside class
// 3. Friend function has access to private member of class
// 4. Paramater of friend function can be used to access private member