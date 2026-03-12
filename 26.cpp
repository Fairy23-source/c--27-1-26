#include <iostream>
using namespace std;

class Base
{
public:
    int a;

protected:
    int b;

private:
    int c;

public:
    void setData()
    {
        a = 10;
        b = 20;
        c = 30;
    }

    void showBase()
    {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
        cout << "Value of c = " << c << endl;
    }
};

// Public Inheritance
class PublicDerived : public Base
{
public:
    void showPublic()
    {
        cout << "Public Inheritance:" << endl;
        cout << "a = " << a << endl; // public -> public
        cout << "b = " << b << endl; // protected -> protected
        // c not accessible
    }
};

// Protected Inheritance
class ProtectedDerived : protected Base
{
public:
    void showProtected()
    {
        setData();
        cout << "Protected Inheritance:" << endl;
        cout << "a = " << a << endl; // becomes protected
        cout << "b = " << b << endl; // remains protected
    }
};

// Private Inheritance
class PrivateDerived : private Base
{
public:
    void showPrivate()
    {
        setData();
        cout << "Private Inheritance:" << endl;
        cout << "a = " << a << endl; // becomes private
        cout << "b = " << b << endl; // becomes private
    }
};

int main()
{
    PublicDerived obj1;
    obj1.setData();
    obj1.showPublic();

    ProtectedDerived obj2;
    obj2.showProtected();

    PrivateDerived obj3;
    obj3.showPrivate();

    return 0;
}
