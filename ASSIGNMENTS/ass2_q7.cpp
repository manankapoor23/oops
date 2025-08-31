#include <iostream>
using namespace std;

class Sample{
    int x;
    public:
        Sample(int val){
            x = val ;
        }
    void show() const{
        cout<<"the value of x is "<< x<<endl;
        // x+=10;
        // we cannot modify the member inside the const function
        cout<<"the sqaure of x is "<<x*x<<endl;
    }
};

int main() {
    Sample s(5);
    s.show();
    return 0;
}