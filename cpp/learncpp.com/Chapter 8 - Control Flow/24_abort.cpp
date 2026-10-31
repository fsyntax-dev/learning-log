#include <iostream>
#include <cstdlib>

// std::abort() - to terminate abnormally 
//              - kill it now
//              - no destructor
//              - no chance to save or log
// abnormal termination - program had unsual runtime error and can't continue to run

int main(){

    std::cout << "Pre Abort" << "\n";
    std::abort();
    std::cout << "Post Abort" << "\n";


    return 0;
}