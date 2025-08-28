#include <iostream>
#include <vector>
using namespace std;

class Batter{
    public:
    int runs;
    string name;
    public:
    Batter(int run=0,string n = "m"){
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

int main(){
    Batter good(78,"Virat Kohli");
    good.display();
    good.set(100);
    Batter okay(30,"Manan Kapoor");
    Batter *ptr = &okay;
    ptr->display();
    good.display();

}
