#include<iostream>
using namespace std;

class Base{
    public:
    int base_var = 123;

    void show(){
        cout<<"Base Class Variable : "<<base_var<<endl;
    }
};

class Derived : public Base{
    public:
    int derived_var = 321;

    void show(){
        cout<<"Derived Class Variable : "<<derived_var<<endl;
    }
};

int main(){
    Base ob_base;
    Derived* ptr_derived;

    ptr_derived = &ob_base;

    ob_base.show();

    ptr_derived->show();

    return 0;
}