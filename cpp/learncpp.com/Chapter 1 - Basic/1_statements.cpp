#include <iostream>
using namespace std;

int main(){

    // declaration statements
    int x = 7;
    int y = 3;

    cout << x << "\n";
    cout << y << "\n";

    // expresion statements

    int sum = x + y;
    cout << sum << "\n";

    // selection statements
    if (sum > 5){
        cout << "Greater" << "\n";
    }
    else if (sum < 5){
        cout << "Least" << "\n";
    }
    else{
        cout << "Invalid" << "\n";
    }

    return 0;
}