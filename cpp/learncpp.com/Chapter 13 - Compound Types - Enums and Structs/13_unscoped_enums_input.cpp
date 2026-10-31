#include <iostream>
#include <string>
#include <vector>
enum Car{
    porsche,
    mercedes,
    lamborghini,
    pagani,
};

constexpr std::string_view getCarName(Car car){
    switch(car){
        case porsche:       return "Porsche";
        case mercedes:      return "Mercedes";
        case lamborghini:   return "Lamborghini";
        case pagani:        return "Pagani";
        default:            return "Unknown";
    }
}

std::vector<std::string> cars = {
        "Porsche",
        "Mercedes",
        "Lamborghini",
        "Pagani"
    };
    
int main(){

    std::cout << "Carlist: " << "\n";                   
    for(int i = 0; i < cars.size(); ++i){               // Iterate Car List
        std::cout << i + 1 << ". " << cars[i] << "\n";
    }

    std::cout << "\n";

    std::cout << "Enter your car: ";                    // Input 
    int input{};
    std::cin >> input;
    
    Car car{static_cast<Car>(input)};                   // Initialize Variable
    std::cout << "Car: " << getCarName(car) << "\n";    // Call Function


    return 0;
}