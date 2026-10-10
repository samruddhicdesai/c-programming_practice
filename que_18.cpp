
#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newdept) {
        dept = newdept;
    }
};

int main() {
    Teacher t1;

    t1.name = "Sam";
    t1.subject = "Maths";
    t1.dept = "CSE";
    t1.salary = 200000000;

    cout << t1.name;

    return 0;
}
