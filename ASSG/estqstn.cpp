#include <iostream>
using namespace std;

template <class T>
class Num{
    private:
    T number;
    public:
    T sum;
    void input(){
        cout<<"enter the number: ";
        cin>>number;
    }
    void show(){
        cout<<"the sum is : "<<sum<<endl;
    }
    friend Num operator +(Num n1,Num n2){
        Num temp;
        temp.number = n1.number+n2.number;
        return temp;
    };
};

int main(){
    Num<int> n1,n2,n3;
    
}



