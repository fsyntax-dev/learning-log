#include <iostream>

// goto statement - unconditional jump
//                - jump to another spot 

// statement label - a placeholder that act like a checkpoint to jump

int main(){
    int x{};
    
checkpointOne:                                           // statement label
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if(x > 10){
        goto checkpointOne;                              // goto statement
    }
    else{
        std::cout << "Number was: " << x << "\n";
    }

    return 0;
}