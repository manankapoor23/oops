#include <iostream>

using namespace std;


class Calorie{
    private:
    int energy_cal;
    public:
    Calorie(){
        energy_cal = 50;
    }
    Calorie(int x){
        this->energy_cal=x;
    }
    float getC(){
        return energy_cal;
    }
};

class Joule{
    private:
    int energy_joule;
    public:
    Joule(){
        energy_joule = 100;
    }
    Joule(float x){
        this->energy_joule=x;
    }
    void convert(){
        float  ans ;
        ans = (energy_joule*0.239006);
        cout<<energy_joule<< "joules =" <<ans<<"cals"<<endl;
    }

};

int main(){
    // int energy ;
    // cout<<"Enter energy (joules) : "; 
    // cin>>energy;
    Joule j(200);
    j.convert();
    

}