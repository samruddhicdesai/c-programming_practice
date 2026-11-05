#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    public:
    void setRoll(){
        roll = 101;
    }
    void display(){
        cout<<"Roll number = "<<roll;
    }
};
int main(){
    student s;
    s.setRoll();
    s.display();
    return 0;

}