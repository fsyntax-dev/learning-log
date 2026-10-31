#include <iostream>

const int& generateId(){
    static int id {0};
    ++id;
    return id;
}

int main(){

    int idOne {generateId()};
    int idTwo {generateId()};


    std::cout << idOne << "\n";
    std::cout << idTwo << "\n";


    return 0;
}