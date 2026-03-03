#include <iostream>
using namespace std;

class complex {
    float real, imag;

public:
    // Default Constructor
    complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized Constructor
    complex(float r, float i) {
        real = r;
        imag = i;
    }

    void disp() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

    complex sum(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    complex c1(2, 5);
    complex c2(3, 4);
    complex c3;   // default constructor

    c3 = c1.sum(c2);

    cout << "First Complex Number: ";
    c1.disp();

    cout << "Second Complex Number: ";
    c2.disp();

    cout << "Sum: ";
    c3.disp();

    return 0;
}
