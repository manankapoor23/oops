#include <iostream>
using namespace std;

class  Chai{
    public:
        int servings ;
        string flavor;
    Chai(int serv , string flav){
        servings=serv;
        flavor= flav;
        cout<<"constructor called"<<endl;
    }
    Chai(){
        cout<<"constructor called once again"<<endl;
    }
    ~Chai(){
        cout<<"destructor called"<<endl;
    }   
    friend int serve(const Chai &chai1){
        return chai1.servings;
    }
};

int main(){
    Chai masala(5,"ginger");
    Chai ginger;
    cout<<"the number of servings are : "<<serve(masala)<<endl;
}
