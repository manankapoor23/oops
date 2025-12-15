#include <iostream>
using namespace std;

class Shape{
    protected:
    int width;
    int length;
    public:
    void setWidth(int w){
        width=w;
    }
    void setLength(int l){
        length=l;
    }
};
class PaintCost{
    public:
    int getCost(int area){
        return area*70;
    }
};

class Rectangle:public Shape,public PaintCost{
    public:
    int getArea(){
        return width*length;
    }
};

int main(){
    Rectangle rect;
    rect.setWidth(30);
    rect.setLength(20);
    int area = rect.getArea();
    cout<<"area of rectangle : "<<area<<endl;
    cout<<"total cost : "<<rect.getCost(area);
}