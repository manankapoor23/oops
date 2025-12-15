// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     public:
//     A(int x){
//         this->i=x;
//         cout<<"constructing A"<<endl;
//     }
// };

// class B:public A{
//     public:
//     int j;
//     B(int x,int y):A(y){
//         j =x;
//         cout<<"constructing B"<<endl;
//     }
//     void show(){
//         cout<<i<<endl;
//         cout<<j<<endl;
//     }
// };

// int main(){
//     B obj(3,4);
//     obj.show();
// }



// multiple base classes 
#include <iostream>
using namespace std;

class Base1{
    protected:
        int i;
    public:
        Base1(int x){
            i=x;
            cout<<"constructing base1"<<endl;
        }
};
class Base2{
    protected:
        int k;
    public:
        Base2(int x){
            k=x;
            cout<<"constructing base2"<<endl;
        }
};

class derived : public Base1,public Base2{
    int j;
    public:
        derived(int m , int n , int o):Base1(n),Base2(o){
            this->j=m;
            cout<<"constructing derived class"<<endl;
        }
        void show(){
            cout<<i<<" "<<j<<" "<<k<<" "<<endl;
        }
};

int main(){
    derived ob(2,3,4);
    ob.show();
}