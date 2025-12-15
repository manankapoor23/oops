#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"my name is manan"<<endl;
    }
};

class B:public A{
    public:
    void show(){
        cout<<"my name is class B"<<endl;
    }
};

int main(){
    A *ptr ;
    B aa;
    ptr=&aa;
    ptr->show();
}

// #include <iostream>
// using namespace std;

// class Student{
//     public:
//     int age;
//     static int count;
//     void set(int m){
//         this->age=m;
//     }
//     Student(){
//         cout<<"constructor called"<<endl;
//         count++;
//     }
//     void show(){
//         cout<<"count : "<<count<<endl;
//     }
//     void ager(){
//         cout<<"age is "<<age<<endl;
//     }
// };

// int Student::count=0;


// int main(){
//     Student s[10];
//     s[0].set(10);
//     s[0].ager();
//     s->show();
// }