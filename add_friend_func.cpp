#include <iostream>
using namespace std;

class Num{
    private:
    int a ;
    public:
    Num(int number){
        a = number;
    }
    friend int sum(const Num &num1,const Num &num2){
        return (num1.a+num2.a);
    }

};

int main(){
    
    Num x(23);
    Num y(12);
    cout<<sum(x,y);
}