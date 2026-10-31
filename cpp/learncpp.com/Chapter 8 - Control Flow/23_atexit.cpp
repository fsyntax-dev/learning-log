#include <iostream>
#include <cstdlib>

// halts cleanup - cleanup before program terminate
// if we forced terminate, the left over of variable doesn't get destroyed at the end of the block
// std::atexit() - register task to run at the end of program


void sayBye(){

    std::cout << "Goodbye!" << "\n";

}

int main(){

    std::atexit(sayBye);                    // tell the program to call this before exit

    //std::exit(0);                         // it will call here

    std::cout << "Main Program" << "\n";

    return 0;                               // it will call here

}