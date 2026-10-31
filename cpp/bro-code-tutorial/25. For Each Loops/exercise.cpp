#include <iostream>
using namespace std;


int main() 
{
    string countries[] = {"Malaysia", "Japan", "Germany", "USA", "France", "Brazil"};

    cout << "\n";

    for(string country : countries){
        cout << country << "\n";
    }


    return 0;
    
}