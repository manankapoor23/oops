#include <iostream>
using namespace std;

class Time{
    public:
    int hours;
    int minutes;
    Time(int h, int m){
        this->hours=h;
        this->minutes=m;
    }
    friend bool operator ==(Time a, Time b){return a.hours*60+a.minutes==b.hours*60+b.minutes;}   
    friend bool operator !=(Time a,Time b){return a.hours*60+a.minutes!=b.hours*60+b.minutes;}
    friend bool operator <(Time a,Time b){return a.hours*60+a.minutes<b.hours*60+b.minutes;}

    friend istream& operator >>(istream &in , Time &obj){
        in>>obj.hours>>obj.minutes;
        return in;
    }
    friend ostream& operator <<(ostream &out , Time &obj){
        out<<"time:"<< obj.hours<<" "<<obj.minutes;
        return out;
    }
};


int main(){
    Time t1(3,15);
    Time t2(1,15);
    if(t1==t2){
        cout<<"yes times are equal"<<endl;
    }
    else{
        cout<<"the times are not equal"<<endl;
    }
    if(t1<t2){
        cout<<"t1 less than t2"<<endl;
    }
    else{
        cout<<"t2 less"<<endl;
    }
    cout<<t1;
}