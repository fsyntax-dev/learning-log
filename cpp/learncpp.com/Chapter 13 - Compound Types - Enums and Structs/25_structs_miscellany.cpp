#include <iostream>

struct Employee{
    int id {};
    int age{};
    double salary {};
};

struct Company{
    int numberofEmployees{};
    Employee CEO {};
};

int main(){

    Company myCompany{7, {1, 25, 55000.00}};

    std::cout << myCompany.CEO.age << "\n";
    std::cout << myCompany.CEO.salary << "\n";

    return 0;
}