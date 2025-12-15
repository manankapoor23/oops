/*
Implement a C++ program to define three classes Alpha, Beta and Gamma, each class
having private data members. Gamma is a class derived from Alpha and Beta (by applying
multiple inheritance). Use constructors and destructors to read and display data.*/

#include <iostream>
using namespace std;
class Alpha {
    public:
    int a;
public:

    Alpha(int x = 0) {
        a = x;
        cout << "Alpha constructor called. a = " << a << endl;
    }
    ~Alpha() {
        cout << "Alpha destructor called. a = " << a << endl;
    }
    void displayA() {
        cout << "Value of a: " << a << endl;
    }
};
class Beta {
    public:
    int b;
public:
    Beta(int y = 0) {
        b = y;
        cout << "Beta constructor called. b = " << b << endl;
    }
    ~Beta() {
        cout << "Beta destructor called. b = " << b << endl;
    }
    void displayB() {
        cout << "Value of b: " << b << endl;
    }
};
class Gamma : public Alpha, public Beta {
    int c;
public:
    Gamma(int x = 0, int y = 0, int z = 0) : Alpha(x), Beta(y) {
        c = z;
        cout << "Gamma constructor called. c = " << c << endl;
    }
    ~Gamma() {
        cout << "Gamma destructor called. c = " << c << endl;
    }
    void displayC() {
        cout << "Value of c: " << c << endl;
    }
};
int main() {
    int x, y, z;
    cout << "Enter values for a, b, and c: ";
    cin >> x >> y >> z;
    Gamma g(x, y, z);
    g.displayA();
    g.displayB();
    g.displayC();
    return 0;
}

