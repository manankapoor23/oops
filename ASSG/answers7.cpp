// Q1 //
#include <iostream>
using namespace std;
class Time {
    int h, m, s;
public:
    Time(int h=0, int m=0, int s=0) : h(h), m(m), s(s) {}
    Time operator+(Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s / 60;
        temp.h = h + t.h + temp.m / 60;
        temp.s %= 60;
        temp.m %= 60;
        return temp;
    }
    void show() { cout << h << ":" << m << ":" << s << endl; }
};
int main() {
    Time t1(5,15,34), t2(9,53,58), t3;
    t3 = t1 + t2;
    t3.show();
}

#include <iostream>
#include <cstring>
using namespace std;
class STRING {
    char str[100];
public:
    STRING(const char* s="") { strcpy(str, s); }
    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    bool operator==(STRING s) {
        return strcmp(str, s.str) == 0;
    }
    void show() { cout << str << endl; }
};
int main() {
    STRING s1("Hello "), s2("World"), s3;
    s3 = s1 + s2;
    s3.show();
    if(s1 == s2) cout << "Equal"; else cout << "Not Equal";
}

#include <iostream>
using namespace std;
class Matrix {
    int a[2][2];
public:
    void input() {
        for(int i=0;i<2;i++) for(int j=0;j<2;j++) cin >> a[i][j];
    }
    void display() {
        for(int i=0;i<2;i++){ for(int j=0;j<2;j++) cout << a[i][j] << " "; cout << endl; }
    }
    friend Matrix operator*(Matrix m1, Matrix m2);
};
Matrix operator*(Matrix m1, Matrix m2) {
    Matrix temp;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            temp.a[i][j]=0;
            for(int k=0;k<2;k++)
                temp.a[i][j]+=m1.a[i][k]*m2.a[k][j];
        }
    return temp;
}
int main() {
    Matrix m1, m2, m3;
    m1.input(); m2.input();
    m3 = m1 * m2;
    m3.display();
}


