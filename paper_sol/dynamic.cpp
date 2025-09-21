// #include <iostream>
// using namespace std;

// class Test{
//     int a ,b ;
//     public:
//     Test(int m , int n){
//         cout<<"constructor called "<<endl;
//         a=m;
//         b=n;
//     };
//     ~Test(){
//         cout<<"destructor called "<<endl;
//     }
//     void show(){
//         cout<<" a is : "<<a<<endl;
//         cout<<" b is : "<<b<<endl;
//     }
//     };

// int main(){
//     int a , b ;
//     cout<<"enter values to be shown :";
//     cin>>a;
//     cin>>b;
//     Test *obj = new Test(a,b);
//     obj->show();
//     delete obj;
// }

#include <iostream>
using namespace std;

class SmartDevice {
    const int id;   // const data member
    int power;
public:
    SmartDevice(int i, int p) : id(i), power(p) {}  // initialize const in initializer list

    void display() {
        cout << "ID: " << id << ", Power: " << power << "W\n";
    }
    int getPower() const { // getter function
        return power;
    }

    void setPower(int p) { // optional setter
        power = p;
    }
};

int main() {
    SmartDevice sd(1, 100);
    sd.display();
    sd.setPower(200);
    sd.display(); // ERROR: cannot modify const member
    return 0;
}
