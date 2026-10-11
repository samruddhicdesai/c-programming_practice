
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void input() {
        cout << "Enter real number: ";
        cin >> real;

        cout << "Enter imaginary number: ";
        cin >> imag;
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    cout << "Addition: ";
    c3.add(c1, c2);
    c3.display();

    cout << "Subtraction: ";
    c3.sub(c1, c2);
    c3.display();

    return 0;
}
