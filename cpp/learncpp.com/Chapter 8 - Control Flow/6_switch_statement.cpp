#include <iostream>
#include <string>

void checkDay(int day){
    switch(day){
        case 1:
            std::cout << "Sunday";
            break;
        case 2:
            std::cout << "Monday";
            break;
        case 3:
            std::cout << "Tuesday";
            break;
        case 4:
            std::cout << "Wednesday";
            break;
        case 5:
            std::cout << "Thursday";
            break;
        case 6:
            std::cout << "Friday";
            break;
        case 7:
            std::cout << "Saturday";
            break;  
        default:
            std::cout << "Unknown" << "\n";
            break;
    }
}

int askDay(){
    int day{};
    std::cout << "Enter day: ";
    std::cin >> day;
    return day;
}

int main(){

    checkDay(askDay());


    return 0;
}