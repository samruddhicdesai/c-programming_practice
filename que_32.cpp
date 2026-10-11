#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter a = ";
cin>>a;
cout<<"Enter b = ";
cin>>b;
cout<<"Enter c = ";
cin>>c;
if(a>b&&a>c){
    cout<<"A is greater";
}
else if(b>c){
    cout<<"B is greater";
}
else{
    cout<<"C is greater";
}
return 0;
}