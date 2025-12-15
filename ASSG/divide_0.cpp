#include <iostream>
using namespace std;
template <class T>
class Test{
    public:
    T a,b;
    public:
    Test(T m , T n){
        this->a=m;
        this->b=n;
    }
};
template <class T>
void divideNum(Test<T>& obj){
    if(obj.b==0){
        throw(0);
    }
    else{
        cout<<"this division is: "<< obj.a/obj.b;
    }
}
int main(){
    Test<int> t(20,0);
    Test<double> t1(19.46,4.65);
    try{
        divideNum(t);
        cout<<endl;
        divideNum(t1);
    }
    catch(...){
        cout<<"divide by zero error cannot continue further "<<endl;
    }
}