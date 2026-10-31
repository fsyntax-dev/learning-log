#include <iostream>

// default member initialization - explicitly give default value

struct Employee{
    int id {};
    int age {18};           // Legal Age
    double salary {2000};   // Base Salary
};

std::ostream& operator <<(std::ostream& out, Employee name){
    out << "ID: " << name.id << " Age: " << name.age << " Salary: " << name.salary;
    return out;
}

int main(){

    Employee alana {105};
    Employee bobby {106, 21, 2100}; // Override Defaut Member

    std::cout << alana << "\n";
    std::cout << bobby << "\n";

    return 0;
}