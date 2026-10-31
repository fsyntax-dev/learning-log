#include <iostream>

unsigned int g_state{0};

void seedPRNG(unsigned int seed){
    g_state = seed;
}

unsigned int LCG16()
{
    g_state = 8253729 * g_state + 2396403; 
    return g_state % 32768; 
}

void print10()
{
    for (int count{ 1 }; count <= 5; ++count)
    {
        std::cout << count << " | " << LCG16() << '\n';
    }

    std::cout << '\n';
}

int main(){

    unsigned int x {};
    std::cout << "Enter a seed value: ";
    std::cin >> x;

    seedPRNG(x); 
    print10(); 

    return 0;
}