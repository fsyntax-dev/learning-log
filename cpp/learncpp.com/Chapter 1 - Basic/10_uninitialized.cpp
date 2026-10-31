#include <iostream>

int main(){

    //initialized variable      - variable that has given value after declaration
    //uninitialized variable    - variable that not given value, contains garbage value

    int x;      //uninit
    int y{};    //zero init


    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}