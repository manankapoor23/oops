#include <iostream>
using namespace std;

class Box{
    public:
    int length , breadth , height ;

    Box(int l  =0, int b =0 , int h = 0 ){
        length = l ;
        breadth = b ;
        height =h ;
    }
    void show() {
        cout << "Box(" << length << ", " << breadth << ", " << height << ")\n";
    }

    friend Box incByValue(Box b){
        b.length+=1;
        b.breadth+=1;
        b.height+=1;
        return b ;
    }
    friend Box incByRef(Box &b){
        b.length+=10;
        b.breadth+=10;
        b.height+=10;
        return b  ;
    }

};

int main(void){
    Box b1(3,4,5);
    cout<<"original : ";
    b1.show();

    
    Box b2 = incByValue(b1);
    b2.show();
    b1.show();

    Box b3 = incByRef(b1);
    b3.show();
    b1.show();
    return 0 ;
}