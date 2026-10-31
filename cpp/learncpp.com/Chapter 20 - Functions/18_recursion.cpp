#include <iostream>

// recursive function - function that call itself
//                    - function won't be popped off the stack frame until it finish calling itself/ finished recursion

// recursive termination condition - must be include or it will run forever until stack overflow - terminated
//                                 - when condition met, function will stop calling itself
//                                 - involve if statement

/*
type function_name(){
    code
    condition
    function_name();
}

*/

void countDown(int count){
    std::cout << "push " << count << "\n";

    if(count > 1){
        countDown(count-1);
    }

    std::cout << "pop  " << count << "\n";
}

int main(){

    countDown(5);

    return 0;
}

