#include <iostream>
#include <cassert>
// Assert - used to detect programming error during development
//        - by doucmenting about thing should never happen
//        - if it happen, it programmer fault
//        - it do not allow recovery from error
//        - assert gonna get disable for release build by define macro NDEBUG

// Error Handling - used to handle error for recovery that could happen in release build
//                - can be recoverable issue or,
//                - unrecoverable issue (program will shutdown)

double divide(double x, double y){
    assert(y == 0);
    if (y == 0){
        std::cerr << "Error: Can't Divide by Zero" << "\n";
        return 0;

    }else{
        int sum{ x / y };
        std::cout << sum << "\n";
        return sum;
        
    }
    
    
}

int main(){


    return 0;
}