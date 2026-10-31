#include <iostream>

class Student{
private:
    std::string m_name{};
public:
    Student(std::string_view name) : m_name{name} {}

    std::string getName() const & {return m_name;}              // Lvalue
    std::string getName() const && {return m_name;}             // Rvalue
};

int main(){

    Student Alex{"personOne"};

    std::cout << Alex.getName() << "\n";                        // Lvalue
    std::cout << Student("personOne").getName() << "\n";        // Rvaue


    return 0;
}