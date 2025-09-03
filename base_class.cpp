#include <iostream>
using namespace std;

class Parent{
    public:
    Parent(int age){
        cout<<"parent const called with x = "<<age<<endl;
    }
    ~Parent(){
        cout<<"des called"<<endl;
    }
};
class Child : public Parent{
    public:
    Child(int y):Parent(y){
        cout<<"child const called with y = "<<y<<endl;
    }
};

int main(){
    Parent p1(7);
    Child c1(10);
}