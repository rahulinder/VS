#include<iostream>
#include<windows.h>
using namespace std;

class Base{
    public:
    Base(){
        Sleep(2000);
        cout<<"\nBase constructor Called...\n";
    }
    ~Base(){
        Sleep(2000);
        cout<<"\nBase destructor Called...\n";
    }
};

class Derived : public Base{
    public:
    Derived(){
        Sleep(2000);
        cout<<"\nDerived constructor Called...\n";
    }
    ~Derived(){
        Sleep(2000);
        cout<<"\nDerived destructor Called...\n";
    }
};

int main(){
    cout<<"Createing Base class object...\n";
    Base ob1;
    
    Sleep(2000);
    cout<<"\nCreateing Derived class object...\n";
    Derived ob;

    return 0;
}