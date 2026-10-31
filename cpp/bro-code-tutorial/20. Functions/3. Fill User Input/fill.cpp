#include <iostream>
using namespace std;
// Accept user input and place it an array


int main() 
{
    string foods[5];
    int size = sizeof(foods)/sizeof(string);
    string temp;

    for (int i = 0; i < size; i++){
        cout << "Enter a food you like (Q to Quit) " << i + 1 << ": "; // i + 1 bcs i is 0
        getline(cin, temp);
        if(temp == "Q" || temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }   

    cout << "You like the following food" << "\n";

    for(string food : foods){
        cout << food << "\n";
    }

    return 0;
    
}