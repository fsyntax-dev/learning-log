#include <iostream>
using namespace std;

struct student{
    string name;
    string course;
    double gpa;
    bool enrolled;
};

int main() 
{
    student student1;
        student1.name = "NameOne";
        student1.course = "Finance";
        student1.gpa = 3.33;
        student1.enrolled = true;
    
    student student2;
        student2.name = "NameTwo";
        student2.course = "Statistic";
        student2.gpa = 3.63;
        student2.enrolled = true;

    cout << student1.name << "\n";
    cout << student1.course << "\n";
    cout << student1.gpa << "\n";
    cout << student1.enrolled << "\n";

    cout << "\n";

    cout << student2.name << "\n";
    cout << student2.course << "\n";
    cout << student2.gpa << "\n";
    cout << student2.enrolled << "\n";

    return 0;
    
}