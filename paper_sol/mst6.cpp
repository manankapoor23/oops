#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name ;
    int age ;

    public:
    Student(){
        name = "unknown";
        age = 0 ;
    }

    Student(string n , int a ){
        this->name = n ;
        this->age = a ;

    }

    void display(){
        cout<<"Name : "<<name<<" Age : "<<age<<endl;
        }

    ~Student(){
        cout<<"Destroyed"<<endl;
    }

};

int main(){
    Student s;
    Student s2("Manan Kapoor",19);
    Student *obj = new Student(); // dynamically karne se destructor khudse call nai hota hai 
    s.display();
    s2.display();
    delete obj;
    

}
