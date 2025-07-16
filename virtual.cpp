#include<iostream>
using namespace std;
class first{
    private: 
        int a;
    public:
        void getf(){
            cout<<"Enter a: ";
            cin>>a;
        }
        void showf(){
            cout<<"a: "<<a<<endl;
        }
};
class second: virtual public first{
    private:
        int b;
    public:
        void gets(){
            cout<<"Enter b: ";
            cin>>b;
        }
        void shows(){
            cout<<"b: "<<b<<endl;
        }
};
class third: virtual public first{
    private:
        int c;
    public:
        void gett(){
            cout<<"Enter c: ";
            cin>>c;
        }
        void showt(){
            cout<<"c: "<<c<<endl;
        }
};
class fourth: virtual public second, virtual public third{
    private:
        int d;
    public:
        void get4(){
            getf();
            gets();
            gett();
            cout<<"Enter d: ";
            cin>>d;
        }
        void show4(){
            showf();
            shows();
            showt();    
            cout<<"d: "<<d<<endl;
        }
};
int main(){
    fourth obj;
    obj.get4();
    obj.show4();
    return 0;
}