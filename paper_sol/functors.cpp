#include <iostream>
using namespace std;

class Mul{
    public:
    int val;
    Mul(){};
    Mul(int a){
        this->val=a;
    }
    int operator () (int a){
        return val*a;
    }
};

int main(){
    Mul m1(9);
    cout<<m1(2)<<endl;
    cout<<m1(4)<<endl;
}