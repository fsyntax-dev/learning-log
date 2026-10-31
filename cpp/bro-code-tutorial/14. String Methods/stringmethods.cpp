#include <iostream>


int main() 
{

    std::string name;

    std::cout << "Enter your name: " << "\n";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Your name exceeds 12 characters.";
    }
    else if(name.empty()){
        std::cout << "You name can't be empty.";
    }
    else{
        std::cout << "Welcome " << name;
    }

    return 0;
    
}

/*
    variable.length()
    variable.empty()
    variable.clear()
    variable.append()
    variable.at()
    variable.insert(index, value to insert)
    variable.find(value to find)
*/