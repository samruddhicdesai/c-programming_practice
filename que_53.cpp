#include<iostream>
using namespace std;
int main(){
    int age = 20;
    cout<<(age>=18&&age<=25)<<endl;
    cout<<(age<18||age>25)<<endl;
    cout<<!(age==20)<<endl;
    return 0;
}