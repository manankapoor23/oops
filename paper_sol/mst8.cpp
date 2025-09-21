#include <iostream>
using namespace std;

class Shape {
protected:
    double val1, val2;
public:
    void get_data() {
        cout << "Enter two values: ";
        cin >> val1 >> val2;
    }

    virtual void display_area() = 0;  // pure virtual function

    virtual ~Shape() {   // 👈 virtual destructor
        // optional: cout << "Shape destroyed\n";
    }
};


// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void display_area() override {
        double area = val1 * val2;
        cout << "Area of Rectangle = " << area << endl;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * val1 * val2;
        cout << "Area of Triangle = " << area << endl;
    }
};

int main() {
    // Array of base class pointers
    Shape* shapes[2];

    // Pointing to derived objects
    shapes[0] = new Rectangle();
    shapes[1] = new Triangle();

    cout << "Rectangle:" << endl;
    shapes[0]->get_data();
    shapes[0]->display_area();

    cout << "\nTriangle:" << endl;
    shapes[1]->get_data();
    shapes[1]->display_area();

    // Free memory
    delete shapes[0];
    delete shapes[1];

    return 0;
}
