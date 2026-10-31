#include <iostream>
#include <fstream>

// stream constructor has another parameter 
//      allow to specify how file should be opened
//      by passing the mode

/*
    this is default 
    in      - open file in read mode
    out     - open file in write mode

    app     - append mode - write at end of file
    ate     - open file and move the cursor at end and can place where it want to start
    trunc   - delete existing content when open
    binary  - open file in binary mode instead of text mode (img mp3 etc)

*/


int main(){

    std::ofstream file {"newFile.txt", std::ios::app};

    if(!file){
        std::cerr << "file can't be opened" << "\n";
        return 1;
    }

    file << "This is line 2" << "\n";
    file << "This is line 3" << "\n";

    file.close();

    file.open("newFile.txt", std::ios::app);
    file << "This is line 4" << "\n";
    file.close();


    return 0;
}