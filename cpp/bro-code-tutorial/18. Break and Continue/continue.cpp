#include <iostream>

// continue = skip current iteration

int main() 
{
    for(int i =1; i <=20; i++){

        // skip 13
        if(i == 13){
           continue;     
        }

        std::cout << i << "\n";
    }

    return 0;
    
}