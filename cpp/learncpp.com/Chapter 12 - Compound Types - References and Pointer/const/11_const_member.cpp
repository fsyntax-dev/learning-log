#include <iostream>

class Student{
private:
    std::string m_name{};
    const int m_age{18};                                            // const member variable
public:
    void setName(std::string name){m_name = name;}
    std::string getName() const {return m_name;}                    

    Student() = default;
    Student(std::string name) : m_name{name}{}                      // no need to member initialize

    void print(){
        std::cout << "Student Name: " << m_name<< "\n"
                  << "Age         : " << m_age << "\n";
    }
};

int main(){

    Student student{"Alex"};
    student.print();

    return 0;
}