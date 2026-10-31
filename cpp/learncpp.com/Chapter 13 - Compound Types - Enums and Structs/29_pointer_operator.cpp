#include <iostream>

// -> access member variable by 
// pointer operator is the same with dereference operator

struct Employee{
    int id{};
    int age{};
    double salary{};
};

int main(){

    Employee joe {1, 25, 65000.00};

    Employee* ptr_joe{&joe};
    std::cout << ptr_joe->age << "\n";   

    return 0;
}