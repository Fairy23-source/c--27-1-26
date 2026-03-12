#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void displayRoll()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

class Test
{
protected:
    int sub1, sub2;

public:
    void getMarks()
    {
        cout << "Enter marks of Subject 1: ";
        cin >> sub1;

        cout << "Enter marks of Subject 2: ";
        cin >> sub2;
    }

    void displayMarks()
    {
        cout << "Subject 1 Marks: " << sub1 << endl;
        cout << "Subject 2 Marks: " << sub2 << endl;
    }
};

class Result : public Student, public Test
{
private:
    int total;

public:
    void calculate()
    {
        total = sub1 + sub2;
    }

    void displayResult()
    {
        displayRoll();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getRoll();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}
