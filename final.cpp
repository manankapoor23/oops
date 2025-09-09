#include <iostream>
#include <string>
using namespace std;
// Base class: Student
class Student {
    protected:
        int roll;
        string name;
    public:
        void inputStudent() {
            cout << "Enter roll number: ";

cin >> roll;
cin.ignore();
cout << "Enter name: ";
getline(cin, name);
}
void showStudent() {
cout << "Roll No: " << roll << "\nName: " << name << endl;
}
};
// Intermediate class: Marks
class Marks : public Student {
protected:
int m1, m2;
public:
void inputMarks() {
cout << "Enter marks in subject 1: ";
cin >> m1;
cout << "Enter marks in subject 2: ";
cin >> m2;
}
void showMarks() {
cout << "Subject 1: " << m1 << "\nSubject 2: " << m2 <<
endl;
}
};
// Derived class: Result
class Result : public Marks {
int total;
string status;
public:
void calcResult() {
total = m1 + m2;
status = (total >= 80 && m1 >= 40 && m2 >= 40) ?
"PASSED" : "FAILED";
}
void showResult() {
cout << "Total: " << total << "\nStatus: " << status <<
endl;
}
};
int main() {
int n;
cout << "Enter number of students: ";
cin >> n;

Result students[n];
for (int i = 0; i < n; i++) {
cout << "\n--- Student " << i + 1 << " ---\n";
students[i].inputStudent();
students[i].inputMarks();
students[i].calcResult();
}
cout << "\n=== Results ===\n";
for (int i = 0; i < n; i++) {
cout << "\nStudent " << i + 1 << ":\n";
students[i].showStudent();
students[i].showMarks();
students[i].showResult();
}
return 0;