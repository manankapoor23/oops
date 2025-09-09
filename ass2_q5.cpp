#include <iostream>
using namespace std;

// Global variable
int value = 100;

class Test {
public:
    static int value; // static member variable
};

// Define and initialize static member
int Test::value = 200;

int main() {
    int value = 300; // Local variable

    cout << "Local variable = " << value << endl;       // Prints 300
    cout << "Global variable = " << ::value << endl;    // ::value → global
    cout << "Static member variable = " << Test::value << endl; // Access via ClassName::

    return 0;
}
