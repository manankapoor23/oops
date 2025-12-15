#include <iostream>
using namespace std;

/*
Assumptions:
1. Class A is the base class.
2. Classes B and C inherit from A virtually to avoid duplication of A's members.
3. Class D inherits from both B and C (hybrid inheritance), causing the diamond problem.
4. Virtual inheritance ensures only one instance of A is present in D.
*/

// Base class
class A {
public:
    int value;
    
    A() {
        value = 10;
        cout << "Constructor of A called, value = " << value << endl;
    }
    
    void show() {
        cout << "Value from class A: " << value << endl;
    }
};


class B : virtual public A {
public:
    B() {
        cout << "Constructor of B called" << endl;
    }
};


class C : virtual public A {
public:
    C() {
        cout << "Constructor of C called" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor of D called" << endl;
    }
    
    void display() {
        
        cout << "Accessing value from A through D: " << value << endl;
    }
};

int main() {
    D objD;
    objD.show();      
    objD.display();   
    
    return 0;
}
