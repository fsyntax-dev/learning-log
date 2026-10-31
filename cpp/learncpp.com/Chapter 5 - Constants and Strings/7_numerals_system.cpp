#include <iostream>
#include <bitset>

// decimal  - base 10
// binary   - base 2    
// octa     - base 8
// hex      - base 16
// '        - digit seperator - 1'234'567'890

int main(){
                                // prefix
    int decimal {42};           // none
    int binary  {0b0010'1010};  // 0b
    int octa    {052};          // 0
    int hex     {0x2A};         // 0x
    

    std::cout << decimal    << "\n";
    std::cout << binary     << "\n";
    std::cout << octa       << "\n";
    std::cout << hex        << "\n";

    std::cout << "\n";

    std::cout << decimal << "\n";
    std::cout << std::bitset<8>(decimal) << "\n";
    std::cout << std::hex << decimal << "\n";
    std::cout << std::oct << decimal << "\n";

    return 0;
}