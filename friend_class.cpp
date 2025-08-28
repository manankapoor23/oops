#include <iostream>
using namespace std;

class Plane{
    int wing_span;
    int throttle_speed;
    string pilot_name; 
    public:
    Plane(int w =0,int t =-1){
        wing_span = w ;
        throttle_speed = t ;
    }

    friend class Car;
};

class Car{
    int value ; 
    public:
    void show(const Plane &boeing){
        cout<<"the wingspan is : "<<boeing.wing_span;
    }
};


int main(){
    Plane qatar(345,120);
    Car maruti;
    maruti.show(qatar);
    
}