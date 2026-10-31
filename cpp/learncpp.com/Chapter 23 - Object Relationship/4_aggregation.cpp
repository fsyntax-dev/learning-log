#include <iostream>
#include <string_view>
#include <string>

class Student{
private:
    std::string m_name{};

public:
    Student() = default;
    Student(std::string_view name) : m_name{name} {}    

    std::string& getName() {return m_name;}

    friend std::ostream& operator<<(std::ostream& out, const Student student){
        out << student.m_name;
        return out;
    }
};

class Course{
private:
    const Student& m_student{};

public:
    Course(const Student& student) : m_student{student} {
        std::cout << m_student << " allocated in the course" << "\n";
    }
    ~Course() {
        std::cout << m_student << " dealocated from the course" << "\n";
    }     
};

int main(){

    Student s1 {"John Doe"};

    {
        Course finance {s1};
    } // class destroyed but the member still exists

    std::cout << s1.getName() << "\n";


    return 0;
}

// when coding important to pick which relantionship for object to be