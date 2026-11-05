#include<iostream>
using namespace std;
class Largest
{
    public:
    int a,b;
    void getData();
    void displaylargest();
};
void Largest::getData()
{
    cout<<"Enter two numbers";
    cin>>a>>b;
}
void Largest::displaylargest()
{
    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
}
int main(){
    Largest l;
    l.getData();
    l.displaylargest();
    return 0;
}