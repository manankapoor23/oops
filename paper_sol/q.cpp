// #include <iostream>
// using namespace std;

// class Tyre{
//     private:
//     int width;
//     int weight;
//     public:
//     Tyre(){
//         width=0;
//         weight=0;
//     }
//     void set_data(int wi , int we ){
//         weight=we;
//         width=wi;
//     }
//     void update_data(Tyre &x){
//         x.width = x.width+10;
//         x.weight=x.weight+30;
//     }
//     void show(Tyre &x){
//         cout<<"The width of tyre is : "<<x.width<<endl;
//         cout<<"The weight of tyre is : "<<x.weight<<endl;

//     }
// };

// int main(){
//     Tyre n[3];
//     int wi;
//     int we;
//     for(int i =0;i<3;i++){
//         cout<<"Enter for tyre :  "<< i+1<<endl;
//         cin>>wi;
//         cin>>we;
//         n[i].set_data(wi,we);
//     }
//     for(int i =0;i<3;i=i+2){
//         n[i].update_data(n[i]);
//     }
//     for(int i =0;i<3;i++){
//         n[i].show(n[i]);
//     }

// }

#include <iostream>
using namespace std;

class MyClass {
private:
    int a, b;

public:
    void set_data() {
        cout << "Enter values for a and b: ";
        cin >> a >> b;
    }

    void output() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    void update_data(MyClass arr[], int n) {
        for(int i = 0; i < n; ++i) {
            arr[i].a += 1;
            arr[i].b += 1;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of objects: ";
    cin >> n;
    MyClass* obj = new MyClass[n];

    for(int i = 0; i < n; ++i) {
        cout << "For object " << i+1 << ": ";
        obj[i].set_data();
    }

    // Call update_data on the first object (or any object, as required)
    obj[0].update_data(obj, n);

    cout << "\nAfter incrementing data by one: " << endl;
    for(int i = 0; i < n; ++i) {
        cout << "Object " << i+1 << ": ";
        obj[i].output();
    }

    delete[] obj;
    return 0;
}
