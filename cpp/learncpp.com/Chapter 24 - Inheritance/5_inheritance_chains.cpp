#include <iostream>
#include <string>
#include <string_view>

// inheritance chain - sequence of class connected through inheritance

class Person{
public:
    std::string_view m_name{};
    int m_age{};

    Person(std::string_view name, int age) 
        : m_name{name}, m_age{age} {}
};

class Student : public Person{
public:
    std::string m_schoolName{};

    Student(std::string_view name, int age, std::string_view schoolName)
        : Person{name, age}, m_schoolName{schoolName} {}   

};

class Teacher : public Student{
public:
    std::string m_subject{};
    
    Teacher(std::string_view name, int age, std::string_view schoolName, std::string_view subject)
        : Student{name, age, schoolName}, m_subject{subject} {}
};

class Worker : public Person{
public:
    std::string m_occupation{};

    Worker(std::string_view name, int age, std::string_view occupation) 
        : Person{name, age}, m_occupation{occupation} {}
};

/*
        --- Person ---
        |            |
        v            v
      Student      Worker
        |
        v
      Teacher

Teacher is chain inherit from Student      
*/

int main(){


    return 0;
}