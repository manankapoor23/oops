#include <iostream>
#include <string>
using namespace std;

class Tea{
    private:
    int servings;
    string name;
    public:
    Tea(){
        servings=1;
        name ="Chai";
    }
    Tea(int x , string s ){
        servings=x;
        name = s;
    }
    Tea(int x){
        servings=x;
        cout<<"tea name is not known , but servings are : "<<servings<<endl;
    }
    void show(Tea &obj){
        if(obj.name=="teri_maki_"){
            obj.name = "gaali_mat_de";
        }
        if(obj.servings<0){
            int serv;
            cout<<"enter correct servingds : ";
            cin>>serv;
            obj.servings=serv;
        }
        cout<<"tea name is : "<<obj.name<<" and the servings are : "<<obj.servings<<endl;
    }

};

int main(){
    Tea masala(10,"masala_chai");
    Tea ginger(-1,"teri_maki_");
    masala.show(masala);
    ginger.show(ginger);


}