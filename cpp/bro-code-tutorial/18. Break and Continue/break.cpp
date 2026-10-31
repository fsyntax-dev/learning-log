#include <iostream>

// break = break out of a loop

int main() 
{
    for(int i =1; i <=20; i++){

        // break until 13
        if(i == 13){
           break;     
        }

        std::cout << i << "\n";
    }

    return 0;
    
}