#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Division by zero not allowed!";
        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    cout << "Program continues..." << endl;
}


// try block has this throw , which is catched by the catch block , now the throw is usually a string and hence we pass catch (const char* throw_msg) inside it 
