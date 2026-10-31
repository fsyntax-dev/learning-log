#include <iostream>

void inner(int outer)
{
    int inner{ 1 };
    while (inner <= outer)
    {
        std::cout << inner << " ";
        ++inner;
    }
}

int main()
{
    int outer{ 1 };
    while (outer <= 5){
        inner(outer);
        std::cout << "\n";
        ++outer;
    }
   

    return 0;
}