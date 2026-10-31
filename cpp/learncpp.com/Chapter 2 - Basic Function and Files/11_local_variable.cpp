#include <iostream>

//local variable - variable that exist inside function (in body and in the parameters)
//               - can be accesed only inside function

//local variable lifetime - it ends after the end curly braces of user defined function

                                    
int doubleNumber(int x){            //variable x lifetime start            
                                    //variable x created inside parameters

    int sum{x * 2};                 //variable sum lifetime starts

    return sum;

}                                   //variable x and sum lifetime ends here 


int main(){
                                    //function being called 
    int number{doubleNumber(5)};    //variable number lifetime starts

    std::cout << number << "\n";

    return 0;                       //variable x lifetime ends
}