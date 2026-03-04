#include <iostream>
using namespace std;

class complex
{
private:
    float real, imag;

public:
    // Default constructor
    complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Copy constructor
    complex(const complex &c)
    {
        real = c.real;
        imag = c.imag;
    }

    // Function to add complex numbers
    complex sum(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Display function
    void disp()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    complex c1(2,3);     // parameterized constructor
    complex c2(5,4);     // parameterized constructor
    complex c3;          // default constructor

    c3 = c1.sum(c2);     // sum of complex numbers

    cout << "First Complex Number: ";
    c1.disp();

    cout << "Second Complex Number: ";
    c2.disp();

    cout << "Sum of Complex Numbers: ";
    c3.disp();

    return 0;
}
