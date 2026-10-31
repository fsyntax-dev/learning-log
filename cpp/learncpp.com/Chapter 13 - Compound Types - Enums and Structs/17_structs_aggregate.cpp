#include <iostream>

// aggregate - contain multiple data memeber

struct Employee
{
    int id {};
    int age {};
    double salary {};
};

int main(){

    Employee frank {102, 32, 3000};
    Employee louis {103, 32};       // salary is default 0

    return 0;
}


