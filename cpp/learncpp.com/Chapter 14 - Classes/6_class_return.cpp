#include <iostream>
#include <string>

class Student{
private:
    std::string m_name{};

public:
    void setName(const std::string& name){m_name = name;}
    // can't bind non_const reference to temporary
    // std::string& name won't compile because name is temporary

    // return type of a member function should match type - string with string
    const std::string& getName() const { return m_name;}
 // const - return read-only reference
                              // const - member function not modify member variable 
    
};

int main(){

    Student name{};

    name.setName("John Doe");

    name.getName();

    return 0;
}