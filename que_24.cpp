#include <iostream>
using namespace std;
class Car
{
    public:
    string name;
    int prize;
    int seat;
    string type;
};
void print(Car c)
{
    cout << c.name << " " << c.prize << " " << c.seat << " " << c.type << endl;
}
int main()
{
    Car c1;
    c1.name = "Honda city";
    c1.seat = 5;
    c1.prize = 450000;
    c1.type = "Sedan";

    Car c2;
    c2.name = "Veda";
    c2.seat = 2;
    c2.prize = 128000;
    c2.type = "Hero";

    print(c1);
    print(c2);

    return 0;
}