#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    void inc() { count++; }
};

int Counter::count = 1; 

int main() {
    Counter c1, c2;
    c1.inc();
    c2.inc();
    cout << Counter::count; 
    return 0;
}
