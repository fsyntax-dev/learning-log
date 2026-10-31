#include <iostream>
using namespace std;
// new      - to allocate memory
// delete   - to free it

int main() 
{
    int *ptr = new int;


    cout << ptr << "\n";

    delete ptr;
    ptr = nullptr;

    return 0;
    
}