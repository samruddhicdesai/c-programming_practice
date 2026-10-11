#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    float marks;

    public:

    void inputdetails(){
        cout<<"Enter student Name : ";
        getline(cin>>ws,name);
        cout<<"Enter Roll no : ";
        cin>>rollno;
        cout<<"Enter the marks : ";
        cin>>marks;
    
    }
    void displaydetails()const{
        cout<<"\n student Details \n";
        cout<<"Name = "<<name<<endl;
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};
int main(){
    Student s;
    s.inputdetails();
    s.displaydetails();
    return 0;
}