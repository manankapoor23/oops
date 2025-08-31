#include <iostream>
#include<vector>
using namespace std;

class Rect{
    public:
    int length , breadth ;
    Rect(int l =0 ,  int b  = 0 ){
        length = l ;
        breadth = b  ;
    }
    public:
        void show(int length,int breadth){
            cout<<"area : "<< length*breadth<<endl;

        }

};

int main(void){
    int le;
    int br;
    Rect r[3];
    vector<int> areas;
    for(int i =0;i<3;i++){
        cout<<"enter L :"<<endl;
        cin>>le ;
        cout<<"enter B: "<<endl;
        cin>>br;
        r[i].show(le,br);
        areas.push_back(le*br);
    }
    for(int i =0;i<areas.size();i++){
        cout<<"The area of "<<i+1<<" rectangle is : "<<areas[i]<<endl;
    }
}