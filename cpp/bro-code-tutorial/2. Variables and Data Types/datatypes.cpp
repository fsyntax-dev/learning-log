/*
Data Types
1. Integer          : int variable = value;
2. Double           : double variable = value;
3. Single Character : char variable = 'value';
4. Boolean          : bool variable = true;
5. Strings          : std::string variable = "string";
*/

#include <iostream>

int main(){

    //integer (whole number)
    int age = 24;
    int year = 2025;

    //double (decimal number)
    double price = 10.99;
    double cgpa = 3.33;

    //single character
    char grade = 'A';
    char sex   = 'M';

    //boolean(True or False)
    bool student = true;    // 1 for True
    bool light   = false;   // 0 for False

    //string
    std::string first_name = "First";
    std::string last_name = "Last";

    //output
    std::cout << age << "\n";
    std::cout << year << "\n";

    std::cout << price << "\n";
    std::cout << cgpa << "\n";

    std::cout << grade << "\n";
    std::cout << sex << "\n";

    std::cout << student << "\n";
    std::cout << light << "\n";

    std::cout << first_name << "\n";
    std::cout << last_name << "\n";

    std::cout << "Hello " << first_name << last_name << std::endl;
    std::cout << "Your age is " << age << std::endl;

    return 0;

}