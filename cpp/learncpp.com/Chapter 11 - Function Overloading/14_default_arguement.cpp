#include <iostream>

// default arguement - default value provide in function paramter

void print(int x, int y = 10){      // int y has default arguement 10 literal
    std::cout << x << "\t";
    std::cout << y << "\t";
}

int main(){

    print(5);       // use default
    print(5, 20);   // 20 literal is user supplied arguement 
                    // user supplied arguement will override default arguement

    return 0;
}