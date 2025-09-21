#include <iostream>

using namespace std;

class Tea{
    private:
    int servings ;
    public:
    Tea(){
        servings = 10;
        cout<<"default servings : "<<servings<<endl;
    }
    Tea(int s){
        this->servings=s;
        cout<<"entered servings are : "<<servings<<endl;
    }
    Tea(Tea &obj){
        cout<<"the servings of obj are: "<<obj.servings<<endl;
    }
    ~Tea(){
        cout<<"all teas destroyed"<<endl;
    }

};

int main(){
    Tea masala;
    Tea adrak(30);
    Tea green(masala);
}