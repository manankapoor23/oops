#include <iostream>
using namespace std;

class Triangle{
    public:
    Triangle(int b ,int h){
        base = b ;
        height=h;
    }
    private:
    int base ;
    int height;
    public:
    friend void compareArea(Triangle &t1,Triangle &t2);
};

void compareArea(Triangle &t1,Triangle &t2){
    double area1 = 0.5 * t1.base * t1.height;
    double area2 = 0.5 * t2.base * t2.height;

    if (area1 > area2)
        cout << "Triangle 1 is bigger\n";
    else if (area1 < area2)
        cout << "Triangle 2 is bigger\n";
    else
        cout << "Both triangles have equal area\n";
}

int main(){
    Triangle t1(3,4) ;
    Triangle t2(5,4);
    compareArea(t1,t2);


}