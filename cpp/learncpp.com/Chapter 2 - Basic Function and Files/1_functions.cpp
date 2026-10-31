#include <iostream>
//function - collection of statements that execute sequentially
//user-defined function - function that not built in main()
//can't defined function in main function

void doPrint(){

    std::cout << "Interupt()" << "\n";

}

int main(){
    
    std::cout << "Starting Main()" << "\n"; // start main function execution    

    doPrint();                              // interupt main excecution
                                            // execute user-defined function

    std::cout << "Continue Main()" << "\n"; // continue main function
    std::cout << "Main() End" << "\n"; 

    return 0;
}