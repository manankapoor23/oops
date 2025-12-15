#include <iostream>
#include <vector>
using namespace std;

class Batter{
    public:
    int runs;
    string name;
    public:
    Batter(int run=0,string n = "m"){
        cout<<"const batter"<<endl;
        runs = run;
        name = n ;
    }
    void display()
    {
        cout<<name<<" has hit "<<runs<<" runs"<<endl;
    }
    void set(int runs){
        this->runs=runs;
    }
};
class Man:public Batter{
    public:
    int age;
    Man(){
        cout<<"const man"<<endl;
    }
    void set(int a){
        this->age=a;
    }
    void display(){
        cout<<"name : "<<name<<endl<<" age is: "<<age<<endl;
    }
};

int main(){
    Batter good(78,"Virat Kohli");
    good.display();
    good.set(100);
    Batter okay(30,"Manan Kapoor");
    Batter *ptr = &okay;
    ptr->display();
    good.display();
    Man m;
    m.set(40);
    m.display();
    m.Batter::display();

}
