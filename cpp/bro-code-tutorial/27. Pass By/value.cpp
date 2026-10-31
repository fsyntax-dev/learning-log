#include <iostream>
using namespace std;

void swapValue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10, y = 20;

    swapValue(x, y); 

    cout << "X: " << x << "\n"; 
    cout << "Y: " << y << "\n"; 

    return 0;
}
