#include <iostream>
#include <string>

// access member by value   - object.member
// access member by pointer - object->member

struct Student{
    std::string name{};
    int age{};
};

int main(){

    Student sOne{};

    sOne.name = "Alex Smith";
    sOne.age = 24;

    Student* ptrStudent {&sOne};

    std::cout << ptrStudent->name << "\n";

    return 0;
}
