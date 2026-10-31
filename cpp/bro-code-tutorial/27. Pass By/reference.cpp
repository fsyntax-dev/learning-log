#include <iostream>
using namespace std;

void swapReference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10, y = 20;

    swapReference(x, y); 

    cout << "X: " << x << "\n"; 
    cout << "Y: " << y << "\n"; 

    return 0;
}
