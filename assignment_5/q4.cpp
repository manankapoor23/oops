/*Write a C++ program creating an abstract class Student. Create three derived classes
Science, Art and Commerce from the base class. Create the objects of the derived classes and
process them and access them using array of pointer of type Student.*/
#include <iostream>
using namespace std;
class Student {
    string name;
    int roll_no;
public:
    Student(string n = "", int r = 0) : name(n), roll_no(r) {}
    virtual void display() = 0; 
    virtual ~Student() {} 

};

class Science : public Student {
    float physics, chemistry, math;
public:
    Science(string n, int r, float p, float c, float m) : Student(n, r), physics(p), chemistry(c), math(m) {}
    void display() override {
        cout << "Science Student: ";
        Student::display();
        cout << "Physics: " << physics << ", Chemistry: " << chemistry << ", Math: " << math << endl;
    }
};
class Art : public Student {
    float history, literature, geography;

public: 
    Art(string n, int r, float h, float l, float g) : Student(n, r), history(h), literature(l), geography(g) {}
    void display() override {
        cout << "Art Student: ";
        Student::display();
        cout << "History: " << history << ", Literature: " << literature << ", Geography: " << geography << endl;
    }
};  
class Commerce : public Student {
    float accounting, economics, business_studies;  
public: 
    Commerce(string n, int r, float a, float e, float b) : Student(n, r), accounting(a), economics(e), business_studies(b) {}
    void display() override {
        cout << "Commerce Student: ";
        Student::display();
        cout << "Accounting: " << accounting << ", Economics: " << economics << ", Business Studies: " << business_studies << endl;
    }
};
int main() {
    const int size = 3;
    Student* students[size];

    students[0] = new Science("Alice", 1, 85.5, 90.0, 88.0);
    students[1] = new Art("Bob", 2, 78.0, 82.5, 80.0);
    students[2] = new Commerce("Charlie", 3, 92.0, 89.5, 94.0);

    for (int i = 0; i < size; ++i) {
        students[i]->display();
        delete students[i]; 
    }

    return 0;
}   

