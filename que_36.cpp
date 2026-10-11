#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main(){
    swap(10,3);
    return 0;
}