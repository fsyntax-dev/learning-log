#include <iostream>


void printHello(){

    std::cout << "Hello Bitch" << '\n'; //To organize better code as it grows larger
}

int main(){

    printHello();                       //Can reuse the function by calling it in main()
    printHello();                       //Reduce redundancy
    printHello();

    return 0;
}
                                        //Fucntion should perform one task
                                        //If function is too long, split into subfunction
                                            //Reading input
                                            //Calculating input
                                            //Printing utput  