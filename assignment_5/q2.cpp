/*Write a program to define class X, Y and Z. Each class contains one character array as a data
member. Using multiple inheritance, concatenate strings of class X and Y and store it in class Z.
Using constructor and destructors, show all the three strings.
*/
#include <iostream>
#include <cstring>
using namespace std;
class X {
    char strX[50];
public:
    X(const char* s = "") {
        strncpy(strX, s, sizeof(strX) - 1);
        strX[sizeof(strX) - 1] = '\0'; 
        cout << "Constructor of class X called. strX = " << strX << endl;
    }
    ~X() {
        cout << "Destructor of class X called. strX = " << strX << endl;
    }
    void displayX() {
        cout << "String in class X: " << strX << endl;
    }
    const char* getStrX() const {
        return strX;
    }
};
class Y {
    char strY[50];
public:
    Y(const char* s = "") {
        strncpy(strY, s, sizeof(strY) - 1);
        strY[sizeof(strY) - 1] = '\0'; 
        cout << "Constructor of class Y called. strY = " << strY << endl;
    }
    ~Y() {
        cout << "Destructor of class Y called. strY = " << strY << endl;
    }
    void displayY() {
        cout << "String in class Y: " << strY << endl;
    }
    const char* getStrY() const {
        return strY;
    }
};
class Z : public X, public Y {
    char strZ[100];
public:
    Z(const char* s1 = "", const char* s2 = "") : X(s1), Y(s2) {
        snprintf(strZ, sizeof(strZ), "%s%s", getStrX(), getStrY());
        cout << "Constructor of class Z called. strZ = " << strZ << endl;
    }
    ~Z() {
        cout << "Destructor of class Z called. strZ = " << strZ << endl;
    }
    void displayZ() {
        cout << "Concatenated string in class Z: " << strZ << endl;
    }
};
int main() {
    char str1[50], str2[50];
    cout << "Enter string for class X: ";
    cin.getline(str1, sizeof(str1));
    cout << "Enter string for class Y: ";
    cin.getline(str2, sizeof(str2));
    Z z(str1, str2);
    z.displayX();
    z.displayY();
    z.displayZ();
    return 0;
}


