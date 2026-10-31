#include <iostream>

// new[]    - new type[length]
// delete[] - delete[] array_name

// to delete array use "delete[]" not "delete"

int main(){

    int* arrayptr { new int[10]{} } ;   // allocate memory with c style array of length 10

    arrayptr[0] = 5;                    // set element

    delete[] arrayptr;                  // deallocate array

    return 0;
}