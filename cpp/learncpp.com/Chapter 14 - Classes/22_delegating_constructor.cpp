#include <iostream>
#include <string>
#include <string_view>

class Student{
private:
    std::string m_name{};                                       // Member Variables
    int m_id{};
    bool m_prefect{false};

public:
    Student(std::string_view name, int id)                      // First Constructor
        : m_name{name}, m_id{id} {
        std::cout << "Student Name: " << name << "\n";
        std::cout << "Student ID  : " << id << "\n";
    }

    Student(std::string_view name, int id, bool prefect)        
        : m_prefect{prefect} {
        Student(name, id);                                      // Called First Constructor - Temp Object != Delegation
        std::cout << "Position    : Prefect" << "\n";
    }

    void setName(std::string_view name) {m_name = name;}        // Setter
    void setID(int id) {m_id = id;}
    void setPrefect(bool prefect) {m_prefect = prefect;}

    const std::string& getName() const {return m_name;}         // Getter
    const int& getID() const {return m_id;}
    const bool& getPrefect() const {return m_prefect;}
};

std::ostream& operator <<(std::ostream& out, Student student){  // Operator Overload 
    out << "Student Name: " << student.getName() << "\n" 
        << "Student ID  : " << student.getID() << "\n";
        if(student.getPrefect() == true)                        // Conditionals
            std::cout << "Position    : Prefect " << "\n";
    return out;
}

int main(){

    Student smith{"John Smith", 101};                           // Aggregate Initialization - Initialization with multiple type
        std::cout << "\n";
    Student marissa{"Marissa Eve", 102, true};
        std::cout << "\n";
    Student Alex{"John Doe", 103};
        std::cout << "\n";
    Alex.setPrefect(true);                                      // Set

    std::cout << Alex << "\n";

    return 0;
}