#include<iostream>
using namespace std;
class Student{
public:
   string name;
   int rollno;
   float cgpa;
};
int main(){
    Student s;
    s.name = "Sam";
    s.rollno = 26;
    s.cgpa = 9.9;

    cout<<s.name;
}