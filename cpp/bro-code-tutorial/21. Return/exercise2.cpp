#include <iostream>
using namespace std;

string holiday(int day) {
    if (day >= 5) {
        return "Rejected";
    } 
    else if (day <= 4) {
        return "Approved";
    } 
    else {
        return "Invalid Parameters!";
    }
}


int main() {
    int day;
    cout << "Enter leave: ";
    cin >> day;  

    string result = holiday(day);
    cout << result << "\n";

    return 0;
}
