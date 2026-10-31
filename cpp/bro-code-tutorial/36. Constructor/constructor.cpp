#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float gpa;

    //Methods 1 this ->
    Student(string name, int age, float gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {
    Student s1("NameOne", 24, 3.33);

    cout << s1.name << "\n";
    cout << s1.age << "\n";
    cout << s1.gpa << "\n";

    return 0;
}
