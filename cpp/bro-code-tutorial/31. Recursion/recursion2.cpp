#include <iostream>
using namespace std;

// Factorial Function 
int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    }
    else{
        return 1;
    }

}

int main() 
{

    cout << factorial(3);

    return 0;
    
}