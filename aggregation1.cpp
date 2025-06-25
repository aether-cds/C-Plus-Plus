/*
Employee{
    empid
    ename
    gender
    date of birth{
        day
        month
        year
    }
}
*/
#include <iostream>
using namespace std;
class DateOfBirth {
    private:
        int day, month, year;
    public:
        void getDOB() {
            cout << "Enter date of birth (day month year): ";
            cin >> day >> month >> year;
        }
        void showDOB() {
            cout << "Date of Birth: " << day << "/" << month << "/" << year << endl;
        }
};
class Employee {
    private:
        int empid;
        string ename;
        string gender;
        DateOfBirth dob; 
    public:
        void getEmployee() {
            cout << "Enter employee ID: ";
            cin >> empid;
            cout << "Enter employee name: ";
            cin >> ename;
            cout << "Enter employee's gender: ";
            cin >> gender;
            dob.getDOB();
        }
        void showEmployee() {
            cout << "Employee ID: " << empid << endl;
            cout << "Employee Name: " << ename << endl;
            cout << "Employee gender : "<<gender << endl;
            dob.showDOB();
        }
};
int main() {
    Employee emp;
    emp.getEmployee();
    cout << "Employee Details:" << endl;
    emp.showEmployee();
    return 0;
}