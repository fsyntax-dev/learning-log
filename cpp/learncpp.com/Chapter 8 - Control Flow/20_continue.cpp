#include <iostream>

// continue - to end current iteration without terminate entire loop
//          - to skip an iteration

int main(){

    for (int count{1}; count <= 10; count++){   // start loop
        if(count == 5){                         // we skip number 5
            continue;                           // then loop continue again
        }

        std::cout << count << "\n";

    }

    return 0;
}