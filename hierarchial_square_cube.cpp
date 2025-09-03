#include <iostream>
using namespace std;

class Number{
    public:
    int num;
    void setnum(int n ){
        this->num = n ;
    }

};

class Sqr : public Number{
    public:
    int get_sqr(){
        return num*num;
    }
    void sqr_show(){
        cout<<"the square of "<<num<<" is "<<get_sqr()<<endl;
    }
};

class Cube : public Sqr{
    public:
    int get_cube(){
        return num*num*num;
    }
    void cub_show(){
        cout<<"the cube of "<<num<<" is "<<get_cube()<<endl;
    }
};

int main(){
    int num;
    int choice ;
    cout<<"1. SQUARE ";
    cout<<"2. CUBE "<<endl;
    cout<<"enter choice : ";
    cin>>choice;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    switch (choice)
    {
    case (1):
        Sqr s ;
        s.setnum(num);
        s.sqr_show();
        break;
    case (2):
        Cube c ;
        c.setnum(num);
        c.cub_show();
    
    default:
        cout<<"no number entered";
        break;
    }

    



}