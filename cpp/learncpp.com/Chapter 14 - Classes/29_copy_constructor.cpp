#include <iostream>
#include <string>
#include <string_view>

class Student{
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

    void printInfo() const {
        std::cout << "Student Name: " << getName() 
                  << " ID: " << getID() 
                  << " Age: "<< getAge() << "\n";
    }
    
    Student() = default;
    Student(std::string_view name, int id, int age) 
        : m_name{name}, m_id{id}, m_age{age}{
        printInfo();
        }
    Student(const Student& student) 
        : m_name{student.m_name}, m_id{student.m_id}, m_age{student.m_age}{
        std::cout << "Copy of ";
        printInfo();
    }
};

int main(){

    Student joe{"Joe Belmont", 101, 15};
    Student {joe};                          // temp object

    return 0;
}