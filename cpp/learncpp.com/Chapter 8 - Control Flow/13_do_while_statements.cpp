#include <iostream>
// do while loop - execute code first then check the condition
//               - if true  -> loops again
//               - if false -> stop

int main(){

    int i = {1};

    do {
        std::cout << "Counter : " << i << "\n";
        i++;
    } while (i <= 5);

    return 0;
}