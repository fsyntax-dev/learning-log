#include <iostream>


void Choice(){
    std::string gender;

    do{std::cout << "Please your gender (Male or Female): ";
        std::cin >> gender;
    
        if(gender == "Male" || gender == "male"){
            std::cout << "XY";
            break;
        }
        else if(gender == "Female" || gender == "female"){
            std::cout << "XX";
            break;
        }
        else{
            std::cout << "Invalid Parameters" << "\n";
        }}while(gender != "Male" || gender != "male" || gender != "Female" || gender != "female");
    
}


int main() 
{

    Choice();

    return 0;
    
}