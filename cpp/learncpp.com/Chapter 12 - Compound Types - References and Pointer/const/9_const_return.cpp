#include <iostream>

class Student{
private:
    std::string m_name{};
    int m_age{};
public:
    const std::string& getName() {return m_name;}                       // const return
    int getAge() {return m_age;}

    Student() = default;
    Student(std::string name, int age) : m_name(name), m_age(age) {}
};

int main(){


    return 0;
}