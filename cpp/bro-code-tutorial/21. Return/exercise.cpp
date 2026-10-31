#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}


int main() 
{
    int result = add(10, 12);
    cout << "Sum: " << result << "\n";

    return 0;
    
}


// Return = send value back to where the function was called.