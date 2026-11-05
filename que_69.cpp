#include<iostream>
using namespace std;
class Square{
    public:
    int area(int x){
        return x * x;
    }
};
int main(){
    Square s;
    cout<<"Area = "<<s.area(5);
}