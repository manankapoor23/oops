// // Example of a non-const object
// #include <iostream>
// using namespace std;
// class Test{
// public:
//     int i;
//     Test(): i(0) {}
//     int getter(int x) const {
//         x = i ;
//         return i ; 
//     }
//     void setValue(int a) { i=a;}
// };

// int main(){
//     const Test t; 
//     cout<<t.getter(10);
// }

#include <iostream>
using namespace std ;

class Arr{
    public:
    Arr(){
        cout<<"const called\n";
    }
};

int main(){
    Arr a[5];
}