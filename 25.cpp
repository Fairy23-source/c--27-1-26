#include <iostream>
using namespace std;

class ExternalMarks;   // forward declaration

class InternalMarks
{
private:
    int imarks;

public:
    void setInternal()
    {
        cout << "Enter Internal Marks: ";
        cin >> imarks;
    }

    friend void result(InternalMarks, ExternalMarks);
};

class ExternalMarks
{
private:
    int emarks;

public:
    void setExternal()
    {
        cout << "Enter External Marks: ";
        cin >> emarks;
    }

    friend void result(InternalMarks, ExternalMarks);
};

void result(InternalMarks i, ExternalMarks e)
{
    int total;
    total = i.imarks + e.emarks;

    cout << "Total Marks = " << total << endl;
}

int main()
{
    InternalMarks i;
    ExternalMarks e;

    i.setInternal();
    e.setExternal();

    result(i, e);   // calling friend function

    return 0;
}
