#include <iostream>

// recursive function - the act of execute function by itself

void print(int x){

    std::cout << "push " << x << "\n";

    if(x > 1){
        print(x - 1);                   // recursive start
    }

    std::cout << "pop  " << x << "\n";  // occur after recursive finished
}

int main(){

    print(5);


    return 0;
}

/*
what happen in the stack

   | print(1) |     // iii. until meet recursive termination condition
   | print(2) |
   | print(3) |
   | print(4) |     // ii.  and cont execute recursive function
   | print(5) |     // i.   function print (5) just pause here
   |  main()  |
   +----------+


   |          |     // iv.  start to execute the rest of the function
   | print(2) |     // v.   print(1) has been pop off
   | print(3) |     // vi.  will execute the rest of "paused function"
   | print(4) |
   | print(5) |
   |  main()  |
   +----------+
   
*/

