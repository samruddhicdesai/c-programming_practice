#include<iostream>
using namespace std;
int main(){
    int choice,num1,num2,num3,total;
    cout<<"Enter num1 = ";
    cin>>num1;
    cout<<"Enter num2 = ";
    cin>>num2;
    cout<<"Enter num3 = ";
    cin>>num3;
    cout<<"Enter one option"<<endl;
    cout<<"1.+\n2.-\n3.*\n4./\n5.%";
    cout<<"Enter choice = ";
    cin>>choice;

    switch(choice){
        case 1:
        total = num1 + num2 + num3;
        cout<<total<<endl;
        break;

        case 2:
        total = num1 - num2 - num3;
        cout<<total<<endl;
        break;

        case 3:
        total = num1 * num2 * num3;
        cout<<total<<endl;
        break;

        case 4:
        total = num1 / num2 / num3;
        cout<<total<<endl;
        break;

        case 5:
        total = num1 % num2 % num3;
        cout<<total<<endl;
        break;
    }
}