
#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    float avg;

    // Parameterized constructor
    Cricketer(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print()
    {
        cout << name << " " << runs << " " << avg << endl;
    }
};

int main()
{
    Cricketer c1("Virat Kohli", 280000, 55.4);
    Cricketer c2("Rohit Sharma", 18000, 47.3);

    c1.print();
    c2.print();

    return 0;
}
