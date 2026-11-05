#include<iostream>
using namespace std;
struct students{
    string name;
    int age;
};
int main(){
students s1;
s1.name = "Raj";
s1.age = 20;
cout<<s1.name<<endl;
cout<<s1.age;
return 0;

}