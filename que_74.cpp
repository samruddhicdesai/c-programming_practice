#include<iostream>
using namespace std;
class Student
{
  private:
  int marks[5];
  public:
  void getdata(){
    for(int i = 0; i < 5;i++){
        cin>>marks[i];
    }
  }
  void display(){
    for (int i = 0; i<5;i++){
        cout<<marks[i]<<" ";
    }
  }
};
int main(){
    Student s;
    s.getdata();
    s.display();
    return 0;
}