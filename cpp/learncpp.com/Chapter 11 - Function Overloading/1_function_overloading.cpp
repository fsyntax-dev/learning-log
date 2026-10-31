#include <iostream>

// function overloading - mutiple function with same name but different parameters
// create mutiple function and compiler decide to pick which one is suit

// non overload function - function with unique name

int divide(int x, int y){                           // overload function
    if(y == 0){
        std::cerr << "Can't Divide by 0" << "\n";
        return 0;
    }
    else{
        return x / y;
    }
}

double divide(double x, double y){                  // overload function
    if(y == 0){
        std::cerr << "Can't Divide by 0" << "\n";
        return 0.0;
    }
    else{
        return x / y;
    }
}

int add(int x,int y){                               // non overload function
    return x + y;
}


int main(){

    std::cout << divide(10,2) << "\n";
    std::cout << divide(10.0,4.0) << "\n";


    return 0;
}