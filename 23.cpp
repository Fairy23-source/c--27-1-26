#include <iostream>
using namespace std;

class ExternalMarks;   // Forward declaration

class InternalMarks {
    int imarks;

public:
    InternalMarks(int m) {
        imarks = m;
    }

    friend void result(InternalMarks, ExternalMarks);
};

class ExternalMarks {
    int emarks;

public:
    ExternalMarks(int m) {
        emarks = m;
    }

    friend void result(InternalMarks, ExternalMarks);
};

void result(InternalMarks i, ExternalMarks e) {
    int total = i.imarks + e.emarks;
    cout << "Total Marks: " << total << endl;
}

int main() {
    InternalMarks internal(25);
    ExternalMarks external(70);

    result(internal, external);

    return 0;
}
