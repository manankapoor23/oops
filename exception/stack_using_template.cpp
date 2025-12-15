#include <iostream>
using namespace std;

const int SIZE = 10;

template<class Stacktype> 
class Stack{
    Stacktype stk[SIZE];
    int tos;
    public:
        Stack(){
            this->tos=0;
        }
        void push(Stacktype ob);
        Stacktype pop();
};

template<class Stacktype> 
void Stack <Stacktype>::push(Stacktype ob){
    if(tos==SIZE){
        cout<<"stack is full";
        return;
    }
    stck[tos]=ob;
    tos++;
}


