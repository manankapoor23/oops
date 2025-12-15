/*
Create a class Person with name and age.
Derive Student from Person and GraduateStudent from Student.

Override a virtual function getDetails() in each class.
Use base class pointer to show runtime polymorphism.*/

#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        int age;
        string name;
    public:
        Person(int a,string n){
            this->age=a;
            this->name=n;
        }
        virtual void getD()=0;
};

class Student:public Person{
    public:
        int id;
        Student(int a,string n,int i):Person(a,n){
            this->id=i;
        }
        void getD() override{
            cout<<"age : "<<age<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"id : "<<id<<endl;
        }
};

class GraduateStudent : public Student {
    int salary;

public:
    GraduateStudent(int a, string n, int i, int s)
        : Student(a, n, i) {
        salary = s;
    }

    void getD() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Person *p1 = new Student(10,"manan",2124);
    Person *p2 = new GraduateStudent(30,"hanan",30,30000);
    p1->getD();
    p2->getD();

}