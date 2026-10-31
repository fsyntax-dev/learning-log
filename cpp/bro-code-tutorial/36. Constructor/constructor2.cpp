#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float gpa;

    //Methods 2 - different names
    Student(string x, int y, float z) {
        name = x;
        age = y;
        gpa = z;
    }
};

int main() {
    Student s1("NameOne", 24, 3.33);
    Student s2("NameTwo", 22, 3.67);

    cout << s1.name << "\n";
    cout << s1.age << "\n";
    cout << s1.gpa << "\n";

    cout << s2.name << "\n";
    cout << s2.age << "\n";
    cout << s2.gpa << "\n";

    return 0;
}
