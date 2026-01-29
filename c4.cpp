#include <iostream>
#include <cmath>
using namespace std;

int power(int n)
{
    return n * n;
}

double power(double n)
{
    return n * n;
}

double power(double m, int n)
{
    return pow(m, n);
}

int main()
{
    cout << "power(5) = " << power(5) << endl;
    cout << "power(2.5) = " << power(2.5) << endl;
    cout << "power(2.0, 3) = " << power(2.0, 3) << endl;

    return 0;
}
