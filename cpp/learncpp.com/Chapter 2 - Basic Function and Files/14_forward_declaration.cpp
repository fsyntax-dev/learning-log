#include <iostream>

//Forward declaration   - function that written after main and need to declare before main
//                      - tell complier the existence of an identifier
//                      - useful for mutiple code files
//                      - tells the compiler that an identifier exists before it is defined

int add(int x, int y);              //function prototype

int main(){

    std::cout << add(5,10) << "\n";
    std::cout << add(6,10) << "\n";
    std::cout << add(7,10) << "\n";

    return 0;
}

int add(int x, int y){              //user-defined function

    return x + y;

}