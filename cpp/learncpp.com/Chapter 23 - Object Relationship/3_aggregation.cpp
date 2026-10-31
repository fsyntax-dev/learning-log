#include <iostream>
#include <string>

// to qualify aggregation -
//                          member part of class                                
//                          member can belong to more than one class at a time  - diff with composition
//                          member existance does not managed by class          - diff with composition
//                          member doesn't know existence of class 

// implement as reference
class Student{
private:
    std::string m_name{};

public:
    Student() = default;
    Student(std::string_view name) : m_name{name} {}    

    std::string& getName() {return m_name;}

};

class Course{
private:
    const Student& m_student{};                                 // member part of class
                                                                // unaware of class existance
public:
    Course(const Student& student) : m_student{student} {}    
    
};


int main(){

    Student s1 {"John Doe"};
    {
        Course finance {s1};
    } // existence doesn't affect by class Course  
    
    std::cout << s1.getName() << "\n";


    return 0;
}