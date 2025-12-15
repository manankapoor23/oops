/*
Design an abstract class Shape that contains:

A protected data member area

A pure virtual function calculateArea()

A virtual function show()

Derive two classes:

Rectangle with data members length and breadth

Circle with data member radius

Additionally:

Overload the + operator to add the areas of two Shape objects.

Demonstrate runtime polymorphism using base class pointers.
*/

#include <iostream>
using namespace std;

class Shape{
    protected:
        float area;
    public:
        virtual void calculateArea()=0;
        virtual void show(){
            cout<<"the area is : "<<area<<endl;
        }
        virtual ~Shape(){};
    friend float operator +(Shape &s1, Shape &s2){
        return s1.area+s2.area;
    };
};

class Rectangle:public Shape{
    public:
        int length;
        int width;
    Rectangle(int l,int w){
        this->length=l;
        this->width=w;
    }
    void calculateArea() {
        area = length*width;
    }
};
class Circle:public Shape{
    public:
        int radius;
    Circle(int r){
        this->radius=r;
    }
    void calculateArea(){
         area= 3.14*radius*radius;
    }
};


int main(){
    Shape *s1 = new Rectangle(20,30);
    Shape *s2 = new Circle(4);

    s1->calculateArea();
    s2->calculateArea();

    s1->show();
    s2->show();
    cout << "Sum of areas = " << (*s1 + *s2) << endl;
    delete s1 ;
    delete s2;


}