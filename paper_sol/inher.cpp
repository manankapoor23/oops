// // Single inheritance 
// #include <iostream>
// using namespace std;

// class pain{
//     private:
//     int number;
//     public:
//     pain(){
//         number = 0;
//     }
//     pain(int x){
//         number = x;
//     }
//     void show(){
//         cout<<"ans is : "<<number;
//     }
// };

// class Child : public pain{
//     private:
//     int sub ;
//     public:
//     Child(int x ): pain(){
//         this->sub = x;
//     }
// };

// int main(){
//     pain m(30);
//     m.show();
//     Child a(20);
//     a.show();

// }


// // multiple inheritance 
// // multilevel inheritance
// //hierarchial inheritance

// void show();
// void show(int a );
// void show(string s);
// void show(int a , int b);


#include <iostream>
using namespace std;
// int myfunc(int i){
//     return i;
// } // these differ in types of parameters
float myfunc(int i){
    return i;
}
int main()
{ // calls myfunc(int i)
cout << myfunc(5); // calls myfunc(double i)
return 0;
}