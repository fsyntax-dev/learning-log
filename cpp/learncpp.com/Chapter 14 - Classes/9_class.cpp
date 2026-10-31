#include <iostream>

class Student{
private:
    std::string m_name{};
    char m_initialName{};

public:
    void setName(std::string_view name){
        m_name = name;
        m_initialName = name.front();
    }

    const std::string& getName() const {return m_name;}
    const char& getInitial() const {return m_initialName;}


    // better use member function not member variable directly
    void print(){
        std::cout << "Name: " << getName() << "\t" << 
                  "Initial: " << getInitial()  << "\n";
    }
};

int main(){

    Student s1{};

    s1.setName("John Doe");

    std::cout << s1.getName() << "\t";
    std::cout << s1.getInitial() << "\n";

    s1.print();

    return 0;
}