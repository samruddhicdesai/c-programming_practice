#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"Inside function "<<endl;
    cout<<"a = "<<a<<"b = "<<b<<endl;

}
int main(){
    int x = 10 , y = 20;
    swap(x,y);
    cout<<"Outside the function"<<endl;
    cout<<"x = "<<x<<"y = "<<y;
    return 0;
}