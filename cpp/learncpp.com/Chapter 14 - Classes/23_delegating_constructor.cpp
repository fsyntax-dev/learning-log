#include <iostream>

// constructor delegation - transfer resposibility to another constructor
//                        - call another constructor in constructor
//                        - call the constructor in the member initializer list

class Employee{
private:
    std::string m_name{};
    int m_id {0};

public:
    Employee(std::string_view name) : m_name{name}{
        std::cout << "Employee Name: " << name << "\n";
    }
    Employee(std::string_view name, int id) :Employee(name){
        m_id = id;
        std::cout << "Employee ID  : " << id << "\n";
    }
};
int main(){

    Employee joe{"Joe Biden"};

    Employee tomas{"Tomas Shmark", 101};

    return 0;
}