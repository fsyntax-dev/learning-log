#include <iostream>
using namespace std;
template <typename A, typename B>

auto maxNumber(A x, B y){
    return(x < y)? x : y;

}



int main() 
{

    cout << maxNumber(6.5, 5) << "\n"; 

    return 0;
    
}