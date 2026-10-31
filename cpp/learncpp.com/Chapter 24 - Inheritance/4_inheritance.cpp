#include <iostream>
#include <string>
#include <string_view>

class Person{
public:
    std::string m_name{};
    int m_age{};

    Person() = default;
    Person(std::string_view name, int age) 
        : m_name{name}, m_age{age} {}  

};

class Student : public Person{
public:
    std::string m_schoolName{};

    Student(std::string_view name, int age, std::string_view schoolName)
        : Person{name, age}, m_schoolName{schoolName} {}
};

class Worker : public Person{
public:
    std::string m_occupation{};
    
    Worker(std::string_view name, int age, std::string_view occupation)
        : Person(name, age), m_occupation{occupation} {}  
};


/*
        --- Person ---
        |            |
        v            v
     Student       Worker

Student is a person
Worker is a person

*/


int main(){


    return 0;
}