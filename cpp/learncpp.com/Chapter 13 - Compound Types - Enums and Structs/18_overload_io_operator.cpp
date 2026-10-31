#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double salary {};
};

std::ostream& operator <<(std::ostream& out, const Employee& employee)
{
    out << "ID: "       << employee.id
        << ", Age: "    << employee.age
        << ", Salary: " << employee.salary;

    return out;
}

int main()
{
    Employee john {101, 32, 2300};

    std::cout << john  << "\n";

    return 0;
}
