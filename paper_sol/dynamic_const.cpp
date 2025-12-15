// #include <iostream>
// using namespace std;

// class Test{
//     int *ptr;
//     public:
//     Test(){
//         ptr = new int ;
//         *ptr = 100;
//     }
//     Test(int x ){
//         ptr = new int ;
//         *ptr = x;
//     }
//     void display(){
//         cout<<"The value of object's pointer is : "<<*ptr<<endl;
//     }
// };

// int main(){
//     Test obj;
//     Test obj2(40);
//     obj.display();
//     obj2.display();

// }

#include <iostream>
using namespace std;

class Test{
    int *ptr;
    public:
    Test(){
        ptr = new int;
        *ptr = 100;
    }
    Test(int x ){
        ptr = new int ;
        *ptr = x;
    }
    void display(){
        cout<<"The value of objects pointer is : "<<*ptr<<endl;
    }
};

int main(){
    Test obj;
    Test obj2(40);
    obj.display();
    obj2.display();
}