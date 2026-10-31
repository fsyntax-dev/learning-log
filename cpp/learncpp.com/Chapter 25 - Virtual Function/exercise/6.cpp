#include <iostream>
#include <string>
#include <string_view>


class Human{
protected:
    std::string m_name{};

    Human(std::string_view name) : m_name{name} {}
public:
    
    std::string getName() const {return m_name;}
    virtual std::string_view getType() const {return "Default";} 
};

class Teacher : public Human{
public:
    Teacher(std::string_view name) : Human{name} {}

    std::string_view getType() const override {return "is a Teacher";}

};

class Student : public Human{
public:
    Student(std::string_view name) : Human{name} {}

    std::string_view getType() const override {return "is a Student";}
};

void printType(const Human& human){
    std::cout << human.getName() << " " << human.getType() << "\n";
}


int main(){

    Teacher varA{"Zate"};
    Student varB{"John"};

    printType(varA);    
    printType(varB);    


    return 0;
}