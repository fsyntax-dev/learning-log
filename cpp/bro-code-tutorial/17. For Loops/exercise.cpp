#include <iostream>
/*

    for (initialization; condition; update) {
        Code to execute in each iteration
}
    Initialization  → Runs once before the loop starts. int i = 0;
    Condition       → Checked before each iteration.
    Update          → Runs after each iteration.        i++
*/

int main() 
{

    for (int i = 1; i <= 10; i++){
        std::cout << "Iteration: " << i << "\n";
    }
    return 0;
    
}