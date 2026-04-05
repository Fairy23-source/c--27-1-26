#include <iostream>
using namespace std;

class student
{
private:
    int marks;
    string name;

public:
    int rollno;

    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void printdata()
    {
        cout << "\nRoll No: " << rollno;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    student s[3];        // Array of objects
    student *ptr;        // Pointer to class

    ptr = s;             // Point to first object of array

    cout << "Enter details of 3 students:\n";
    for (int i = 0; i < 3; i++)
    {
        (ptr + i)->getdata();   // Access using pointer
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++)
    {
        (ptr + i)->printdata(); // Access using pointer
    }

    return 0;
}
