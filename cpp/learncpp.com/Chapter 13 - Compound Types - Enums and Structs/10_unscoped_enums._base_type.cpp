#include <iostream>
#include <cstdint>

// base type/underlying type        - type to store enumerator
//                                  - by default it store as int 4 bytes (32 bits)

// can explicitly change the type   - enum enum_name : type 

enum Day : std::int8_t{     // 1 bit only saved memory
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday,
};

int main(){

    Day today{wednesday};

    std::cout << "Today day is: " << today << "\n";

    return 0;
}