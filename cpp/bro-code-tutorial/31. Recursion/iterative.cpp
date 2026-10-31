#include <iostream>
using namespace std;

/*
Recursion 
    + Function invokes itself within break a complex 
      concept into a repeatable single step

      Iterative vs Recursive

    Less code and cleaner - good for sorting and searching algorithms
    Use more memory - slower
*/

// Iterative Approach
void Walk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "You take " << i+1 << " times"<< '\n';
    }
}

int main() 
{
    Walk(100);

    return 0;
    
}