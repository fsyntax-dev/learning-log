#include <iostream>


int main() 
{

    int correct     = 8;
    int question    = 10;
/* 
    both int return whole number 
    only return 0, the rest .8 will be ignored
*/
    double score    = correct/(double)question * 100;


    std::cout << score << "%" << std::endl;


    return 0;
    
}