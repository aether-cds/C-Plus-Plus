/*
College{
    clgName
    address{
        muncipality;ward;street;
    }
    admin{
        campuschf;csitcoordinator;bcacoordinator;
    }
    establishedYear
    phone
}*/
#include <iostream>
using namespace std;
class Address{
    private:
        string municipality, ward, street;
    public:
        void getAddress() {
            cout << "Enter municipality, ward, and street: ";
            cin >> municipality >> ward >> street;
        }
        void showAddress() {
            cout << "Address: " << municipality << ", " << ward << ", " << street << endl;
        }
};
class admin{
    private:
        string campusChief, csitCoordinator, bcaCoordinator;
    public:
        void getAdmin() {
            cout << "Enter campus chief, CSIT coordinator, and BCA coordinator: ";
            cin >> campusChief >> csitCoordinator >> bcaCoordinator;
        }
        void showAdmin() {
            cout << "Campus Chief: " << campusChief << endl
                 << "CSIT Coordinator: " << csitCoordinator << endl
                 << "BCA Coordinator: " << bcaCoordinator << endl;
        }
};
class college {
    private:
        string clgName;
        Address address;
        admin adminDetails;
        int establishedYear;
        string phone;
    public:
        void getCollege() {
            cout << "Enter college name: ";
            getline(cin, clgName)
            address.getAddress();
            adminDetails.getAdmin();
            cout << "Enter established year: ";
            cin >> establishedYear;
            cout << "Enter phone number: ";
            cin >> phone ;
        }
        
        void showCollege() {
            cout << "College Name: " << clgName << endl;
            address.showAddress();
            adminDetails.showAdmin();
            cout << "Established Year: " << establishedYear << endl
                 << "Phone: " << phone << endl;
        }
};
int main() {
    college clg;
    clg.getCollege();
    cout<<endl;
    cout << "College Details:" << endl;
    clg.showCollege();
    return 0;
}