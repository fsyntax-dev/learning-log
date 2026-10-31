#include <iostream>

int getValue(){

    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    int result{input * 2};

    return result;                              // Return result to main()
}

int  main(){

    int x{getValue()};                          // Call getValue, 
                                                // Store result in int num
    
    int y{getValue()};

    std::cout << "Doubled is: " << x << "\n";
    std::cout << "Doubled is: " << y << "\n";

    return 0;                                   // Return value in main is known as
                                                // status code, exit code, or return code
                                                // it signal the code succesful or not
}