#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "The sum is " << sum(a, b);
    return 0;
}