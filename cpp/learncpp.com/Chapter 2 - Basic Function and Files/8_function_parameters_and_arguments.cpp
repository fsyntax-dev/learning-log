#include <iostream>

int add(int x, int y){                          //function for add number

    return x + y;

}

void result(int sum){                           //fucntion for print

    std::cout << "The sum is: " << sum << "\n";
}

int main(){

    result(add(5,7));

    return 0;
}