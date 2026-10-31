#include <iostream>

// iteration - one complete run of a loop

int main(){

    int count{};

    while(count <= 20){
        std::cout << count << "\n";
        ++count;
    }


    return 0;
}