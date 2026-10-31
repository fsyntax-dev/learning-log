#include <iostream>

// -> pointer operator
// ptr_variable -> member_variable

struct Employee{
    int id{};
    int age{};
    double salary{};
};

int main(){

    Employee joe {1, 25, 65000.00};

    Employee* ptr_joe{ &joe};           // create pointer for variable
    std::cout << ptr_joe->id << "\n";   // access pointer of member variable with ->

    return 0;
}