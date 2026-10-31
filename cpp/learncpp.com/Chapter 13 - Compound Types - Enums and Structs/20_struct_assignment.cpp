#include <iostream>

struct Employee{
    int id{};
    int age{};
    double salary{};
};

std::ostream& operator <<(std::ostream& out, Employee& name){
    out << "ID: " << name.id << " Age: " << name.age << " Salary: " << name.salary;
    return out;
}

int main(){

    Employee adriana{1003, 22, 3000.00};

    std::cout << adriana << "\n";

    adriana.salary = 5000.00;
    ++adriana.age;

    std::cout << adriana << "\n";


    return 0;
}