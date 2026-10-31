#include <iostream>

// stack - for local variable, function and function related
// stack is a LIFO structure - 
//                           - push to insert
//                           - pop to remove
//                           - peek to see the top

// the call stack segment    - holds the memory used for the call stack

//                           - app start main() pushed on the call stack
//                           - function get called, pushed on the call stack
//                           - function ends, popped off the call stack         - this process also know as unwinding the stack

// mailbox analogy
// mailbox container - stack frame
// mail              - stack item - can be pop and push

// simple stack example

void foo(int x){
    std::cout << x << "\n";

} // foo is pop off the stack

int main(){

    foo(5); // foo is push on the stack

    return 0;
}

// step by step push and pop (LIFO)

// main     - push main()

// function - push function()
// main

//          - pop function()
// main
