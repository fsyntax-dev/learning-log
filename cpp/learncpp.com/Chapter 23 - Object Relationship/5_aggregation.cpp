#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <functional>

class Student{
private:
    std::string m_name{};

public:
    Student() = default;
    Student(const std::string& name) : m_name{name} {}

    friend std::ostream& operator<<(std::ostream& out, const Student& student){
        out << student.m_name;
        return out;
    }
};

class Course{
private:
    std::vector<std::reference_wrapper<Student>> m_students{};
    
public:
    Course(std::vector<std::reference_wrapper<Student>> students) : m_students{students} {
        for(std::size_t i {0}; i < m_students.size(); ++i){
            std::cout << m_students[i].get() << " has been allocated" << "\n";
        }
        std::cout << "\n";
    }
    ~Course(){
        for(std::size_t i {0}; i < m_students.size(); ++i){
            std::cout << m_students[i].get() << " has been deallocated" << "\n";
        }           
    }

};


int main(){



    return 0;
}