#include <iostream>

// out  - give empty variable to the function
//      - function will put the value into that variable 

void createID(int& studentID){
    static int id {0};
    ++id;
    studentID = id;
}

int main(){

    int myID1{};                 // no value
    int myID2{};                 // no value

    createID(myID1);             // give value
    createID(myID2);             // give value

    std::cout << myID1 << "\n";  
    std::cout << myID2 << "\n";  


    return 0;
}