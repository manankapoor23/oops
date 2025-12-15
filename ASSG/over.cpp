#include <iostream>
using namespace std;

class Summer {
public:
    int a, b;

    Summer(int m, int n) {
        a = m;
        b = n;
    }

    Summer() {
        a = 0;
        b = 0;
    }

    Summer operator+(Summer obj) {
        Summer temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }

    Summer operator++() {   // prefix ++
        ++a;
        ++b;
        return *this;
    }

    void show() {
        cout << a << " " << b << endl;
    }
};

int main() {
    Summer obj1, obj2(40,50), obj3;
    obj3 = obj1 + obj2;
    obj3.show();

    ++obj1;
    obj1.show();
}
