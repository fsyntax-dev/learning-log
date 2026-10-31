#include <iostream>

void printIDNumber(const int *id = nullptr){
    if(id){
        std::cout << "Your ID Number: " << *id << "\n";
    }
    else{
        std::cout << "Unknown ID Number" << "\n";
    }
}

int main(){

    int userID {34};
    printIDNumber(&userID);


    return 0;
}