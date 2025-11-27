#include <iostream>
using namespace std;

class Student{
    private:
        int age;
        string name;
    public:
    Student(){};
    virtual void show(){
        cout<<"it wont print this";
    };
    Student(int a,string s){
        this->age=a;
        this->name=s;
    }
};

class Medicine :public Student{
    public:
        void show(){
            cout<<"meds"<<endl;
        }

};
class Science:public Student{
        public:
        void show(){
            cout<<"sci"<<endl;
        }
    
};
class Engineering :public Student{
        public:
        void show(){
            cout<<"engg"<<endl;
        }
    
};


int main(){
    Student *s[3];
    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2]=&sc;

    for(int i =0;i<3;i++){
        s[i]->show();
    }

}