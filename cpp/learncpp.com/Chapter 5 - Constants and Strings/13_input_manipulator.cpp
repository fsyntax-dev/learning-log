#include <iostream>
#include <string>
// output manipulator - std::setpricision()
// input manipulator  - std::ws - tell cin to ingore whitepace character
//                      spaces '  ' tabs '\t' newline '\n'

std::string carBrand(){
    std::string brand{};
    std::cout << "Enter brand name: ";
    std::getline(std::cin >> std::ws, brand);
    return brand;
}

void print(std::string brand){
    std::cout << "Name: " << brand << "\n";
}


int main(){

    print(carBrand());

    return 0;
}