#include <iostream>
using namespace std;

class Cookie{
    public:
    int serving ;
    string taste ;

    void setserve(int s);
    void show();
};

void Cookie::setserve(int s){
    serving = s;
}
void Cookie::show(){
    cout<<"The cookie name is :"<<taste<<endl;
    cout<<"The number of sevings are "<<serving;
}

int main(){
    Cookie C;
    C.setserve(5);
    C.taste="sweet";
    C.show();
}