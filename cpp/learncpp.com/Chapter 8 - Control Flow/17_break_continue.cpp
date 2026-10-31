#include <iostream>

// break - cause any type of loops to stop

int main(){

    int num{10};

    for(num; num <= 10; num--){
        if(num == 5){
            break;
        }
        std::cout << num << "\n";
    }


    return 0;
}