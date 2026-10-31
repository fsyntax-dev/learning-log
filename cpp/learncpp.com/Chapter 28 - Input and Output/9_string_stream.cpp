#include <iostream>
#include <sstream>

// why we need stream string when cin cout is fine?
//      cin reads from standard input (keyboard)        keyboard -> cin -> program
//      stringstream reads from a std::string object    std::string -> stringstream -> program

// stringstream allows us to extract formatted data from a std::string


int main(){

    std::string data {"2026-02-15, 1.1000, 1.2000, 1.0500, 1.0900"};
    std::stringstream parse(data);

    std::string date;
    double open, high, low, close;
    char comma;

    std::getline(parse, date, ',');
    parse   >> open >> comma 
            >> high >> comma
            >> low >> comma
            >> close;

    std::cout << open << "\n";            

    return 0;
}