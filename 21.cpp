#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    void setlength(float l) {
        length = l;
    }

    void setwidth(float w) {
        width = w;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << " Width: " << width << endl;
    }

    int sameArea(Rectangle r) {
        if (area() == r.area())
            return 1;
        else
            return 0;
    }
};

int main() {
    Rectangle r1, r2;

    r1.setlength(5);
    r1.setwidth(2.5);

    r2.setlength(5);
    r2.setwidth(18.9);

    cout << "First Rectangle:\n";
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    cout << "\nSecond Rectangle:\n";
    r2.show();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    if (r1.sameArea(r2))
        cout << "\nBoth rectangles have SAME area.\n";
    else
        cout << "\nBoth rectangles DO NOT have same area.\n";

    // Change first rectangle
    r1.setlength(15);
    r1.setwidth(6.3);

    cout << "\nAfter Changing First Rectangle:\n";
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    if (r1.sameArea(r2))
        cout << "\nBoth rectangles have SAME area.\n";
    else
        cout << "\nBoth rectangles DO NOT have same area.\n";

    return 0;
}
