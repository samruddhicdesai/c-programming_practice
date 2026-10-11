#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;

    void input(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no : ";
        cin>>rollno;
    }
    void display(){
        cout<<"\nName = "<<name<<endl;
        cout<<"Rol no = "<<rollno<<endl;

    }
};
int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}