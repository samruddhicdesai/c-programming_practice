#include<iostream>
using namespace std;
class Student 
{
    public:
    int roll;
    void display(){
        cout<<"Roll Number = "<<roll;
    }
};
int main(){
   Student s;
   s.roll = 101;
   s.display();
   return 0;
   
}