// // #include <iostream>
// // using namespace std;

// // class Weight{
// //     private:
// //         int kg;
// //     public:
// //         Weight(){
// //             kg =0;
// //         }
// //         Weight(int x){
// //             this->kg=x;
// //         }
// //         void print(){
// //             cout<<"the weight is "<<this->kg<<endl;
// //         }
// //         void operator ++(int){
// //             kg++;
// //         }
// //         void operator --(){
// //             --kg;
// //         }
// //         void operator --(int){
// //             kg--;
// //         }
// //         Weight operator ++(){
// //             Weight temp;
// //             temp.kg= ++kg;
// //             return temp;
// //         }
// // };

// // int main(){
// //     Weight obj(10);
// //     ++obj;
// //     obj.print();
// //     --obj;
// //     obj.print();
// //     obj--;
// //     obj.print();
// // }

// // operator overloading using friend function

// #include <iostream>
// using namespace std;

// class Batsman{
//     private:
//        int runs;
//        int average;
//     public:
//        Batsman(){

//        }
//        Batsman(int r,int a){
//         this->average=a;
//         this->runs=r;
//        }

//     void print(){
//         cout<<"| runs : "<<runs<<" | average: "<<average<<"|"<<endl;
//     }

//     friend Batsman operator +(Batsman obj1,Batsman obj2);
// };

// Batsman operator +(Batsman obj1,Batsman obj2){
//     Batsman temp;
//     temp.runs=obj1.runs+obj2.runs;
//     temp.average=obj1.average+obj2.average;
//     return temp;
// }

// int main(){
//     Batsman b(20,30);
//     Batsman b2(40,10);
//     Batsman b3  = b2+b;
//     b3.print();
// }

// #include <iostream>
// using namespace std;

// class STRING{
//     private:
//         string s;
//     public:
//         STRING(){};
//         STRING(string a){
//             this->s=a;
//         };
//     void print(){
//         cout<<"string : "<<s<<endl;
//     }

//     friend STRING operator +(STRING obj1,STRING obj2);
//     friend bool operator ==(STRING obj1,STRING obj2);
// };

//  STRING operator +(STRING OBJ1,STRING OBJ2){
//     STRING temp;
//     temp.s=OBJ1.s+OBJ2.s;
//     return temp;
//  }

//  bool operator ==(STRING OBJ1,STRING OBJ2){
//     return (OBJ1.s==OBJ2.s);
//  }

// int main(){
//     STRING s("manan");
//     STRING b("manan");
//     STRING c = s+b;
//     c.print();
//     if(s==b){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"no";
//     }
// }

// #include <iostream>
// using namespace std;

// class Matrix{
//     int a[10][10];
//     int r,c;

//     public:
//        Matrix(){};
//        Matrix(int rows,int cols){
//         r=rows;
//         c=cols;
//        }

//     void input() {
//         for(int i=0;i<r;i++)
//             for(int j=0;j<c;j++)
//                 cin >> a[i][j];
//     }

//     void print(){
//                 for(int i=0;i<r;i++) {
//             for(int j=0;j<c;j++)
//                 cout << a[i][j] << " ";
//             cout << endl;
//         }

//     }


//     friend Matrix operator*(Matrix m1,Matrix m2);
        
// };

// Matrix operator*(Matrix m1,Matrix m2){
//     Matrix temp(m1.r,m2.c);

//     for(int i=0;i<m1.r;i++) {
//         for(int j=0;j<m2.c;j++) {
//             temp.a[i][j] = 0;
//             for(int k=0;k<m1.c;k++)
//                 temp.a[i][j] += m1.a[k][j]; // FIX
//         }
//     }
//     return temp;
// }

// int main() {
//     int r1, c1, r2, c2;

//     cout << "Enter rows and cols of Matrix 1: ";
//     cin >> r1 >> c1;

//     cout << "Enter rows and cols of Matrix 2: ";
//     cin >> r2 >> c2;

//     if(c1 != r2) {
//         cout << "Multiplication not possible";
//         return 0;
//     }

//     Matrix m1(r1, c1), m2(r2, c2);

//     cout << "Enter Matrix 1:\n";
//     m1.input();

//     cout << "Enter Matrix 2:\n";
//     m2.input();

//     Matrix m3 = m1 * m2;

//     cout << "\nResultant Matrix:\n";
//     m3.print();
// }


#include <iostream>
using namespace std;

class Array{
    int a[5];
public:
    Array(){
        for(int i =0;i<5;i++){
            a[i]=i+1;
        }
    }
    int& operator[](int index){
        return a[index];
    }
};


int main(){
    Array x;
    cout<<x[2];
}
