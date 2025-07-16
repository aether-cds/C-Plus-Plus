/*first{
    private : a
    public: get(), show()
};
second{
    private: b
    public: get(), show()
};
third{
    private : c
    public: get(), show()
}*/

#include <iostream>
using namespace std;
class First {
    private:
        int a;
    public:
        void get() {
            cout << "Enter value for a: ";
            cin >> a;
        }
        void show() {
            cout << "Value of a: " << a << endl;
        }
};
class Second : public First {
    private:
        int b;
    public:
        void get() {
            First::get();
            cout << "Enter value for b: ";
            cin >> b;
        }
        void show() {
            First::show();
            cout << "Value of b: " << b << endl;
        }
};
class Third : public Second {
    private:
        int c;
    public:
        void get() {
            Second::get();
            cout << "Enter value for c: ";
            cin >> c;
            cout<<endl;
        }
        void show() {
            Second::show();
            cout << "Value of c: " << c << endl;
        }
};
int main() {
    Third obj;
    obj.get();        
    obj.show();
    return 0;
}
