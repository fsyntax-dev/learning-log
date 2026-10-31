#include <iostream>

// A copy constructor should not do anything other than copy an object. 

class Employee{

private:
    std::string m_name{};
    int m_id{};    
    int m_age{};

public:
    void setName(std::string_view name){m_name = name;}
    void setID(int id){m_id = id;}
    void setAge(int age){m_age = age;}

    std::string getName() const {return m_name;}
    int getID() const {return m_id;}
    int getAge() const {return m_age;}

    void print() const {
        std::cout << "Name: " << getName() << "\n"; 
        std::cout << "ID  : " << getID() << "\n";
        std::cout << "Age : " << getAge() << "\n";
    }


    Employee() = default;
    Employee(std::string name, int id, int age) 
        : m_name{name}, m_id{id}, m_age{age} {
            std:: cout << "Original" << "\n";
            print();
        }
    Employee(const Employee& employee) 
        : m_name{employee.m_name}, m_id{employee.m_id}, m_age{employee.m_age} {
            std:: cout << "Copy of" << "\n";
            print();
        }
    
};

int main(){

    Employee harry;
    harry.setName("Harry Wilson");
    harry.setID(101);
    harry.setAge(23);

    Employee harryCopy{harry};

    Employee adrey{"Adrey Henderson", 102, 24};
    Employee adreyCopy{adrey};

    return 0;
}