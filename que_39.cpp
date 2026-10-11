#include<iostream>
using namespace std;
class Sum_and_sub{
    public:
    int num1 , num2 , sum , sub;

    void input(){
        cout<<"Enter num1 = ";
        cin>>num1;
        cout<<"Enter num2 = ";
        cin>>num2;
        sum = num1 +num2 ;
        sub = num1 - num2;

    }
    void display(){
        cout<<"Sum = "<<sum<<endl;
        cout<<"Sub = "<<sub<<endl;
    }

};
int main(){
    Sum_and_sub s;
    s.input();
    s.display();
    return 0;
}