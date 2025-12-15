// Design an abstract class Employee with:

// Protected data member salary

// Pure virtual function calculateSalary()

// Virtual function display()

// Derive:

// PermanentEmployee (basicPay, allowance)

// ContractEmployee (hourlyRate, hoursWorked)

// Overload + operator to calculate total salary of two employees.
// Demonstrate runtime polymorphism using base class pointers.

#include <iostream>
using namespace std;

class Employee{
    protected:
        float salary;
    public:
        virtual void calculateSal()=0;
        virtual void display(){
            cout<<"salary of employee is : "<<salary<<endl;
        }
        friend int operator +(Employee &e1,Employee &e2){
            return e1.salary+e2.salary;
        }
};

class Perm:public Employee{
    public:
        int basicPay;
        int allowance;
        Perm(int bp,int al){
            this->allowance=al;
            this->basicPay=bp;
        }
        void calculateSal() override{
            salary=basicPay+allowance;
        }
};
class Cont:public Employee{
    public:
        int hourlyRate;
        int hoursWorked;
        Cont(int hr,int hw){
            this->hourlyRate=hr;
            this->hoursWorked=hw;
        }
        void calculateSal() override {
            salary = hourlyRate*hoursWorked;
        }
};

int main(){
    Employee *e1 = new Perm(30000,3000);
    Employee *e2 = new Cont(40,40);
    e1->calculateSal();
    e2->calculateSal();
    e1->display();
    e2->display();
    cout<<"the sum of their salaries is : "<<(*e1+*e2)<<endl;

}