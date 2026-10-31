#include <iostream>

// smart pointer - return the address by itself
//               - deallocate address when out of scope

int allocateVar(int x){     // a function that allocate memory
    int* ptr = new int(x);

    return *ptr;            // end here

    delete ptr;             // didn't execute because of return
                            // cause memory leak
                            // that's why we need smart pointer   
}

int main(){


    return 0;
}