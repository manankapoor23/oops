#include <iostream>
using namespace std;

struct customer
{
    int count = 12;
};

struct items
{
    int count = 20 ;
    customer c;
};

int main(){
    items obj;
    cout<<obj.count<<endl;
    cout<<obj.c.count;
}



