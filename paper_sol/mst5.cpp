#include <iostream>
using namespace std;

class Number{
    private:
    int a , b , c , d ;
    public:
    Number(){
        a =0, b =0, c =0, d = 0;

    };
    Number(int a , int b){
        this->a = a;
        this->b = b;
        c =0;
        d=0;

    };
    Number(int a , int b , int c , int d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

    };
    Number(const Number &obj){
        a=obj.a;
        b=obj.b;
        c=obj.c;
        d=obj.d;
    };

    void showData() {
        cout << a << " " << b << " " << c << " " << d << endl;
}
};



int main(){
    Number n(10,20,30,40);
    n.showData();



}