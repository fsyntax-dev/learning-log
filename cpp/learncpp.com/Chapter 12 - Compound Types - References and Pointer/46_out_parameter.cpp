#include <iostream>
#include <string>

void getNum(std::string& position, int& age){
    position = "Manager";
    age      = 24;
}

int main(){

    std::string position{};
    int age {};

    getNum(position, age);

    std::cout << position << "\t";
    std::cout << age << "\t";

    return 0;
}