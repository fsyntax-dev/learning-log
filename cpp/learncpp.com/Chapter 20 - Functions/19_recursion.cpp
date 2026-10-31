#include <iostream>

// recursion function - declare same function in the function definition
// recursion function - function that invokes itself


void print(int x){
    
    std::cout << x  << "\n";

    if(x > 1){                  // base case 
        print(x-1);             // recursive
    }

}

int main(){

    print(5);

    return 0;
}


/*
what happen in the stack

   | print(1) |
   | print(2) |
   | print(3) |
   | print(4) |
   | print(5) |
   |  main()  |
   +----------+
   
*/