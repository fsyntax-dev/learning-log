#include <iostream>
#include <string>
#include <string_view>

// delegating constructor - constructor call another constructor in the same class
// why use this? DRY Dont Repeat Yourself - avoiding repeated code that do the same task
//                                        - instead just call the task

class Employee{
private:
    std::string m_name {""};
    int m_id {0};
    bool m_isManager{false};

public:
    Employee(std::string_view name, int id) : m_name(name), m_id{id}{
        std::cout << "Employee Name: " << name << "\n";             // original code
        std::cout << "Employee ID  : " << id << "\n";               // original code
    }
    Employee(std::string_view name, int id, bool isManager = true) 
        : m_name(name), m_id{id}, m_isManager{isManager}{
        std::cout << "Employee Name: " << name << "\n";             // redundant code
        std::cout << "Employee ID  : " << id << "\n";               // redundant code
        std::cout << "Position     : " << "Manager" << "\n";
    }

};

int main(){



    return 0;
}