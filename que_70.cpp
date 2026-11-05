#include<iostream>
using namespace std;
class Student
{
    public:
    void display();
};
void Student::display(){
    cout<<"Function defined outside class";
}
int main(){
    Student s;
    s.display();
    return 0;
}