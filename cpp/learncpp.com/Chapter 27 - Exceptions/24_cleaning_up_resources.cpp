#include <iostream>
#include <exception>

void openFile(std::string_view path){
    std::cout << "File opened in: " <<  path << "\n";
}

void renameFile(std::string_view newName){
    if(newName.empty()){
        throw std::runtime_error{"Blank Name"};
    }
    // code to rename file
}

void closeFile(){
    std::cout << "File deleted" << "\n";
}


int main(){

    try{
        openFile("Desktop/Folder");
        renameFile("");             // if this line throw exception control flow will jump to cactch handler
        closeFile();                // this line will not be excuted
    }
    catch(const std::exception& exception){
        std::cerr << "Error: " << exception.what() << "\n";
    }

    // two ways to handle this flow 
    //      execute outside try block but dangerous - because need to do manually everytime
    closeFile(); 
    //      destructor
    

    return 0;
}