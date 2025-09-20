// #include <iostream>
// #include <string>

// using namespace std;

// class Car{
//     private:
//         int speed;
//         string fuel ;
//     public:
//         Car(int s , string f){
//             this->fuel=f;
//             this->speed=s;
//         }
//     public:
//         friend void display(Car &c);
// };
// void display(Car &c){
//     cout<<"The Speed is "<<c.speed<<" for the fuel "<<c.fuel<<endl;
// }

// int main(){
//     Car c(45,"petrol");
//     display(c);
    
// }

#include <iostream>
using namespace std;

class Car {
private:
    int speed;  // hidden data (implementation detail)

public:
    Car(){
        speed = 0 ;
    }

    void accelerate() {   // exposed method
        speed += 10;
        cout << "Car speed: " << speed << " km/h\n";
    }

    void brake() {   // exposed method
        speed -= 10;
        if (speed < 0) speed = 0;
        cout << "Car speed: " << speed << " km/h\n";
    }
};

int main() {
    Car c;
    c.accelerate();
    c.accelerate();// we only know what "accelerate" does, not how
    c.brake();
}
