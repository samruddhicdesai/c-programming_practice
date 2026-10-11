#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    if(a>b){
        cout<<"A is greater";
    }
    else if(b>a){
        cout<<"B is greater";
    }
    else{
        cout<<"Invalid Program";
    }
    cout<<"\nProgram ends here";
    return 0;
}