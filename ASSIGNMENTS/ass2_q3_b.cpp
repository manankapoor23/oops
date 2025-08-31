#include <iostream>
using namespace std;

class Car{
    public:
    Car(int agee = 0 ){
        age = agee;
    }
    int age = 3;
    void setage(int agee){
        age = agee ;
    }
    int getter(){
        return age ;
    }
    void show();
};

void Car::show(){
    cout<<"The age of the car is :"<<Car::age<<endl;
}

int main(){
    Car maruti(5);
    maruti.show();
    maruti.setage(10);
    maruti.getter();
    maruti.show();
}