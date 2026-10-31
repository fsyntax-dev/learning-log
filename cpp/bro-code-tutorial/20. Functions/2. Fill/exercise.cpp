#include <iostream>


int main() 
{
    std::string porsche[10];
    fill(porsche, porsche + 10, "911 GT3 RS");

    for(std::string porsche : porsche){
        std::cout << porsche << "\n";
    }

    return 0;
    
}
