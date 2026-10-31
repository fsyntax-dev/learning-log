#include <iostream>
using namespace std;

// Factorial Function 
int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;


}

int main() 
{

    cout << factorial(3);

    return 0;
    
}