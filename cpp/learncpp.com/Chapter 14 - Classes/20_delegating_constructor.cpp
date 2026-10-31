#include <iostream>
#include <string>
#include <string_view>


class Employee{
private:
    std::string m_name {};
    int m_id {};
    bool m_isManager{false};                                                    // default member

public:
    Employee(std::string_view name, int id) 
        : m_name(name), m_id{id}{                                               // member initialization lists
            std::cout << "Employee Name: " << name << "\n";
            std::cout << "Employee ID  : " << id << "\n";
            std::cout << "\n";
    }
    Employee(std::string_view name, int id, bool isManager)                     
        : m_isManager{isManager} {  
            Employee(name, id);                                                 // called first constructor
                                                                                // calling constructor in body create temp object
            std::cout << (isManager == true ? "Position     : Manager" : "");
    }
};

int main(){

    Employee joe{"Joe Rogan", 32};
    Employee bryan{"Bryan Mill", 32, true};

    return 0;
}