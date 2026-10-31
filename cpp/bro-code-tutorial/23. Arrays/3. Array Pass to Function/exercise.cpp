#include <iostream>
using namespace std;

double getTotal(double prices[], int size){
    double total = 0;
    
    for(int i = 0; i < size; i++){
        total = total + prices[i];
    }
    return total;
}


int main() 
{

    double prices[] = {1.29, 4.99, 6.99, 5.39};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    cout << "$ " << total << "\n";


    return 0;
    
}

// function(array)