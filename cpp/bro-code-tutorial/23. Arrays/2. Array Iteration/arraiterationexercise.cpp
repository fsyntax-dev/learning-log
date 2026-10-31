#include <iostream>
using namespace std;


int main() 
{
    string languages[] = {"C++", "Python", "Java", "JavaScript", "Swift", "Go"};

    int size = sizeof(languages)/sizeof(string);

    // Row Iteration: blank space
    cout << "\n";
    for(int i = 0; i < size; i++){
        cout << languages[i] << " ";
    }

    // Columns Iteration: endline
    cout << "\n";
    cout << "\n";
    for(int i = 0; i < size; i++){
        cout << languages[i] << "\n";
    }
    



    return 0;
    
}