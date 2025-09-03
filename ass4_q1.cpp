#include <iostream>
using namespace std;

class car{
    public:
    void display(){
        cout<<"this is a 4 wheeled vehicle"<<endl;
    }
    protected:
    int wheel_size = 10;
    private:
    int key =2 ;

};

class wagon : public car{
    public:
    void show(){
        cout<<"this is a wagon"<<endl;
        cout<<"the wheel size is "<<wheel_size<<endl;
        // cout<<"the key is "<<key<<endl;
    }
};
int main(){
    wagon r ;
    r.display();


}