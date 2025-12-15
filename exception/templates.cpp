// #include <iostream>
// using namespace std;

// template <typename T>
// // T add(T a,T b){
// //     return a+b;
// // }

// void show(T a){
//     cout<<"a"<<endl;
// }
// void show(int a){
//     cout<<"this is integer"<<endl;
// }

// int main(){
//     show(3);
//     show(34.234);
// }

// #include <iostream>
// using namespace std;

// template <class T>
// class Box {
//     T value; // when Box<int> that means T is int okay and then T value means int value and similarly for the string 
// public:
//     Box(T v) { value = v; }
//     void show() { cout << value << endl; }
// };

// int main() {
//     Box<int> b1(10);
//     Box<string> b2("Hello");
//     b1.show();
//     b2.show();
// }


// #include<iostream>
// using namespace std;

// template <class T>
// class Person{
//     public:
//     T age;
//     Person(T val){
//         this->age= val;
//     }
//     void show(){
//         cout<<"the age of the person is"<<age<<endl;
//     }
// };

// int main(){
//     Person<int> p1(10);
//     Person<float> p2(234.9);

// }

#include <iostream>
using namespace std;

template <class X>
X big(X a,X b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<big(2.3242,1.3425);

}