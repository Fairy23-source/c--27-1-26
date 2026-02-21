#include <iostream>
using namespace std;

class Array
{
private:
    int arr[5];

public:
    // Constructor to initialize array
    Array()
    {
        for(int i = 0; i < 5; i++)
        {
            arr[i] = i * 10;
        }
    }

    // Overloading [] operator
    int& operator[](int index)
    {
        return arr[index];
    }

    // Display function
    void display()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array obj;

    cout << "Original Array: ";
    obj.display();

    // Accessing elements using []
    cout << "Element at index 2: " << obj[2] << endl;

    // Modifying element using []
    obj[2] = 100;

    cout << "Modified Array: ";
    obj.display();

    return 0;
}
