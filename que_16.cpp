#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Harry";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of the name is "<<name.length()<<endl;
    cout<<name.substr(1,155)<<endl;
    cout<<name.substr(2,3);
}