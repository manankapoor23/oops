#include <iostream>

using namespace std;

class Numbers{
    private :
    friend void sum(Numbers a , Numbers b);
    int val ;
    public:
    Numbers(int x ){
        val=x;
    }

};

void sum(Numbers a, Numbers b){
    cout<<"sum : "<<a.val + b.val<<endl;
}

int main(){
    Numbers a(10);
    Numbers b(30);
    sum(a,b);
}


// normal member function cud just access the object it belonged to 
