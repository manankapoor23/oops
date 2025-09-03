#include <iostream>
using namespace std;

class Fruit{
    public:
    int fruits;
    void setf(int f){
        this->fruits=f;
    }
    int getf(){
        return fruits;
    }
    void show(){
        cout<<"the number of fruits in the basket is : "<<fruits<<endl;
    }
};

class Mango:public Fruit{
    public:
    int m;
};

class Banana : public Fruit{
    public:
    int b;
};


int main(){
    Mango m ;
    m.setf(5);
    m.show();
    Banana b ;
    b.setf(12);
    b.show();
    cout<<"the total number of fruits in the basket are : "<< m.getf()+b.getf();
}