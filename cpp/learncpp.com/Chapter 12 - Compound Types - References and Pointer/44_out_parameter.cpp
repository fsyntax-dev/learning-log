#include <iostream>

// out paramater - give empty -> function fills it

void generateID(int& humanID){          // passed by reference -> reference studentID is outparamter
    static int id {0};
    ++id;
    humanID = id;                       // modify original -> give value
}

int main(){

    int humanOne {};                    // no value
    generateID(humanOne);

    std::cout << humanOne << "\n";


    return 0;
}