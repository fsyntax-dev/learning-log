#include <iostream>
using namespace std;
/*
Null Value
    + A special value meaning "nothing" or "no value."
    + A pointer with a null value is NOT pointing to anything (null pointer).

nullptr
    + Keyword represents a null pointer
    + Useful to check if a pointer has a valid address or not.
    + Helps prevent "dangling pointers" (pointers pointing to invalid memory).

*/

int main() 
{
    int *pointer = nullptr;
    int *pointer2 = nullptr;
    int x = 123;

    pointer = &x;

    //pointer address to variable x
    if(pointer == nullptr){
        cout << "Not Succesful" << "\n";
    }
    else{
        cout << "Succesful" << "\n";
    }

    cout << "\n";

    // pointer didn't address to anything
    if(pointer2 == nullptr){
        cout << "Not Succesful" << "\n";
    }
    else{
        cout << "Succesful" << "\n";
    }

    

    return 0;
    
}