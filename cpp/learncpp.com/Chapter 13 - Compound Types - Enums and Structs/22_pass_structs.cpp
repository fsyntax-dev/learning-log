#include <iostream>

// passing structs by reference

struct Employee{
    int id{};
    int age{18};
    double salary {2000};
};

void printEmployee(const Employee& name){
    std::cout << "ID: " << name.id << "\t";
    std::cout << "Age: " << name.age << "\t";
    std::cout << "Salary: " << name.salary << "\n";
}

int main(){

    Employee megat {1010, 21};
    Employee sarah {1011, 22, 2100};
    Employee adrina {.id{1012},.salary{2100}};

    printEmployee(megat);
    printEmployee(sarah);
    printEmployee(adrina);

    return 0;
}