#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base(int a)   // Base class constructor
    {
        x = a;
        cout << "Base class constructor called" << endl;
        cout << "Value of x = " << x << endl;
    }
};

class Derived : public Base
{
    int y;

public:
    Derived(int a, int b) : Base(a)   // Passing parameter to base class constructor
    {
        y = b;
        cout << "Derived class constructor called" << endl;
        cout << "Value of y = " << y << endl;
    }
};

int main()
{
    Derived obj(10, 20);   // a goes to Base, b goes to Derived
    return 0;
}
