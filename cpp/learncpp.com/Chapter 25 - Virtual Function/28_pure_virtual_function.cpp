#include <iostream>
#include <string>
#include <string_view>


class Human{
protected:
    std::string m_name{};

public:
    Human(std::string_view name) : m_name{name} {}
    const std::string_view getName() const {return m_name;}
    virtual std::string_view getRole() = 0;

};

class Teacher : public Human{
public:
    Teacher(std::string_view name) 
        : Human{name} 
        {}
        
    std::string_view getRole() override {return "Teacher";}        
};

int main(){

    Teacher Capital {"John Doe"};
    Human& parent{Capital};

    std::cout << parent.getRole() << "\n";


    return 0;
}