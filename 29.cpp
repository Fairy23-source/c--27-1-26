#include <iostream>
using namespace std;

class Student
{
    int rollno;

public:
    void setData(int rollno)
    {
        this->rollno = rollno;   // this pointer refers to current object
    }

    void display()
    {
        cout << "Roll Number = " << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.setData(101);
    s1.display();

    return 0;
}
