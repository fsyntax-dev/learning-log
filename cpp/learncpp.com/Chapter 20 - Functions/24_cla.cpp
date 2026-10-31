#include <iostream>

// create CLA - declare parameter in function main()

// int argc     - argument counts
// char* argv   - argument values - c style array of char pointer

int main(int argc, char* argv[]){

    for(int count {}; count < argc; ++count){
        std::cout << count << "\t" << argv[count] << "\n";
    }

    return 0;
}

// Argument 0 - path of the executable file