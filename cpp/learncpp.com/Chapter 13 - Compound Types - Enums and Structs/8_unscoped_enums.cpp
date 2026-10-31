#include <iostream>

                // enumerator assign with integer by default 
enum Day{
    monday,     // 0
    tuesday,    // 1
    wednesday,  // 2
    thursday,   // 3
    friday,     // 4 
    saturday,   // 5
    sunday,     // 6
};


int main(){

    Day today {tuesday};    // store integral value 1

    return 0;
}