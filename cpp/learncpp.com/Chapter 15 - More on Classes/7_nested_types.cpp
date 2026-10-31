#include <iostream>
#include <string>
#include <string_view>

// nested type allias
// alias that define inside class
// to access it use scope resolution operator

class Employee{
public:
    using id = int;

private:
    std::string m_name{};
    id m_id{};
    double m_wage{};

public:
    const std::string& getName() {return m_name;}
    id getID() {return m_id;}

    Employee(std::string_view name, id code, double wage) 
        : m_name {name}, m_id {code}, m_wage {wage} {

        }
};

int main(){

    Employee john {"John", 101, 4530.00};
    Employee::id johnID{john.getID()};      // access type alias
    // int johnID{john.getID()};            // it just the same, since it alias inside class
                                            // access it via scope resolution operator
                                            // class_name::the_type

    std::cout << john.getName() << "\n";
    std::cout << johnID << "\n";


    return 0;
}