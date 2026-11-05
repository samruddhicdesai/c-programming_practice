#include<iostream>
using namespace std;
class Number{
    public:
    int n;
    void input(){
        cin>>n;
    }
    void square(){
        cout<<"Square = "<<n*n;
    }
    void process(){
        input();
        square();
    }
};
int main(){
    Number n;
    n.process();
    return 0;
}
