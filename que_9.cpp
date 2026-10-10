#include <iostream>
using namespace std;
int main()
{
    int items;
    cout << "Enter the number 1 to 4 to see your item : ";
    cin >> items;

    switch (items)
    {
    case 1:
        cout << "Apple";
        break;
    case 2:
        cout << "Cherry";
        break;
    case 3:
        cout << "Waffle";
        break;
    case 4:
        cout << "Wateermelon";
        break;
    default:
        cout << "Enter 1 to 4 only";
        break;
    }
    return 0;
}