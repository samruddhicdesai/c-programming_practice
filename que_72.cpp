#include<iostream>
using namespace std;
class Demo
{
    public :
    inline int cube(int x);
};
inline int Demo::cube(int x){
    return x*x*x;
}
int main()
{
    Demo d;
    cout<<d.cube(3);
}