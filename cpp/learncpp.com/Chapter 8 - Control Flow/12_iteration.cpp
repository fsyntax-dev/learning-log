#include <iostream>

// iteration - a loop complete
// do something after an iteration

int main(){

    int count{1};

    while(count <=30){
        if(count <= 9){
            std::cout << "0";       // give 0 to single digit
        }
        std::cout << count << " ";  // print counter and space

        if(count % 7 == 0){        // newline after 7
            std::cout << "\n";
        }
        ++count;                    // increase count
    }

    return 0;
}