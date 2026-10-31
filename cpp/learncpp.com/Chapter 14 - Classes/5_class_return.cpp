#include <iostream>
#include <string>

class Student{
private:
    std::string m_name{};

public:
    void setName(std::string_view name){ m_name = name;}

    std::string& getName() {return m_name;}                 // return by reference 
                                                            // reference of getName()

};

int main(){

    Student Alex{};

    Alex.setName("Alex Smith");

    std::cout << Alex.getName() << "\n";

    return 0;
}