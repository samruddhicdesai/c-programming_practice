#include<iostream>
using namespace std;
class Employee{
    public:
    int employee_id;
    string employee_name;
    string department;
    float salary;

    void inputdetails(){
        cout<<"\nEnter the Employee ID : ";
        cin>>employee_id;
        cout<<"Enter the Employee Name : ";
        cin>>employee_name;
        cout<<"Enter the Department : ";
        cin>>department;
        cout<<"Enter the Salary : ";
        cin>>salary;

    }
    void display(){
        cout<<"\n------Details-----\n";
        cout<<"Employee ID = "<<employee_id<<endl;
        cout<<"Employee Name  = "<<employee_name<<endl;
        cout<<"Department = "<<department<<endl;
        cout<<"Salary = "<<salary<<endl;
    }
    void salarycount(){
        cout<<"Annual salary = "<<salary*12<<endl;
    }
};
int main(){
    Employee e1;
    e1.inputdetails();
    e1.display();
    e1.salarycount();

    Employee e2;
    e2.inputdetails();
    e2.display();
    e2.salarycount();

    return 0;

}