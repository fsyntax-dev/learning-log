#include <iostream>
#include <string>
#include <vector>

// push_back    - takes existing object as element
// emplace_back - construct object as element



class Foo{
private:
    std::string m_x{};
    int m_y{};
    
public:
    Foo(std::string x, int y) : m_x{x}, m_y{y} {}

    explicit Foo(int y) : m_x {}, m_y { y } {};

};

int main(){

    std::vector<Foo> stack{};

    Foo foo {"personOne", 24};

    // when push a existing object, both are similar in efficiency
    stack.push_back(foo);                   // prefer this function
    stack.emplace_back(foo);

    // when we push temporary object, emplace_back is efficient
    stack.push_back({"personOne", 24});  // create temp object, the copy to vector
    stack.emplace_back("personOne", 24); // construct object directly in the vector - no copy 

    // push_back won't use explicit constructors, emplace_back will
    stack.push_back({2});   // compile error
    stack.emplace_back(2);  // ok

    return 0;
}

// best practice
// emplace_back - creating temp object to add to container
//              - to use explicit constructor

// push_back    - exisiting object