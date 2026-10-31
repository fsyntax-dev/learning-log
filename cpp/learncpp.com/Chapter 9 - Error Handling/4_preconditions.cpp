#include <iostream>

//precondition - check condition before code execution

int divide(int x,int y){
    if (y != 0){
        int sum{ x / y };
        std::cout <<static_cast<double>(sum) << "\n";
        return sum;

    }else{
        
        std::cerr << "Error: Can't Divide by Zero" << "\n";
        return 0;
    }
    
    
}

int main(){

    divide(5,0);
    
    return 0;
}