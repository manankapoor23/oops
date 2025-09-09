// #include <iostream>
// #include <string>
// using namespace std;

// class Student{
//     protected:
//     int roll_no;
//     string name;
//     public:
//         void inputstudent(){
//             cout<<"enter roll no :";
//             cin>>roll_no;
//             cin.ignore()
//             cout<<"Enter name : ";
//             getline(cin,name);
//         }
//         void showstudent(){
//             cout<<"The student name is : "<<name<<" and the roll no is : "<<roll_no;
//         }
// };

// class Marks : public Student{
//     protected:
//     int m1;
//     int m2;
//     public:
//        void inputmarks(){
//         cout<<"enter marks in subject 1 : ";
//         cin>>m1;
//         cout<<"enter marks in subject 2 : ";
//         cin>>m2;
//        }
//        void showmarks(){
//         cout<<"marks in sub1 : "<<m1<<endl;
//         cout<<"marks in sub2 :"<<m2<<endl;
//        }
// };

// class Result : public Marks{
//     int tot_marks;
//     string status;
//     public:
//     void calc_result(){
//         tot_marks=m1+m2;
//         status = (tot_marks >= 80 && m1 >= 40 && m2 >= 40) ?
// "PASSED" : "FAILED";
//     }
//     void show_res(){
//         cout << "Total: " << tot_marks << "\nStatus: " << status <<endl;
//     }

    

// };

// int main() {
// int n;
// cout << "Enter number of students: ";
// cin >> n;

// Result students[n];
// for (int i = 0; i < n; i++) {
// cout << "\n--- Student " << i + 1 << " ---\n";
// students[i].inputstudent();
// students[i].inputmarks();
// students[i].calc_result();
// }
// cout << "\n=== Results ===\n";
// for (int i = 0; i < n; i++) {
// cout << "\nStudent " << i + 1 << ":\n";
// students[i].showstudent();
// students[i].showmarks();
// students[i].show_res();
// }
// return 0;
// }


#include <iostream>
using namespace std;

class Student {
public:
    static int total; // declaration only
    Student() { total++; }
};

// definition (outside class)
int Student::total = 0;

int main() {
    Student s1, s2, s3;
    cout << "Total students: " << Student::total << endl; // 3
    return 0;
}
