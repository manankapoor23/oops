#include <iostream>
using namespace std;

class Factorial{
    private:
    int n ;
    public:
    Factorial(int number){
        this->n = number;
    }
    void display(){
        int fact = 1;
        if(n==0){
            cout<<"factorial = 1"<<endl;
        }
        else{
            for(int i =1;i<=n;i++){
                fact*=i;
            }
            cout<<"factorial of "<<n<<" is : "<<fact<<endl;
        }
    }
};

int main(){
    Factorial num(5);
    num.display();
}