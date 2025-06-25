#include<iostream>
using namespace std;
class fullname{
    private:
        string firstName, middleName, lastName;
    public:
        void getName(){
            cout << "Enter first name: ";
            cin >> firstName;
            cout << "Enter middle name: ";
            cin >> middleName;
            cout << "Enter last name: ";
            cin >> lastName;
        }
        void showName(){
            cout << "Full Name: " << firstName << " " << middleName << " " << lastName << endl;
        }

};
class student{
    private:
        int rollNo;
        fullname f;
        string faculty;
    public:
        void getStd(){
            cout << "Enter roll number: ";
            cin >> rollNo;
            f.getName();
            cout << "Enter faculty: ";
            cin >> faculty;
        }
        void showStd(){
            cout << "Roll No: " << rollNo << endl;
            f.showName();
            cout << "Faculty: " << faculty << endl;
        }
};
int main() {
    student s;
    s.getStd();
    cout << "Student Details:" << endl;
    s.showStd();
    return 0;
}
      