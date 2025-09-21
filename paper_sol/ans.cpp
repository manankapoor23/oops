#include <iostream>
using namespace std;

class Test {
    static int i; // Declaration of static member
    int num;

public:
    static void getvalue(int);
    Test(int x) {
        num = x;
        i=i+1;
    }
    void show() {
        cout << "the number of objectd are =" << i << endl;
        cout << "num=" << num << endl;
    }
};

// void Test::getvalue() {
//     // i = x;
//     // i++;
//     cout << i << endl;
// }

// Line 24: Definition and initialization of the static member 'i'
int Test::i = 0; 

int main() {
    // Line 27: Calling the static member function
    // Test::getvalue(); 

    Test T1(10);
    Test T2(10);
    Test T3(10);
    Test T4(10);
    Test T5(10);
    Test T6(30);
    T1.show();
}


