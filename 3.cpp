#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"\nBase Constructor Called...\n";
    }
    ~Base(){
        cout<<"\nBase Destructor Called...\n";
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"\nDerived Constructor Called...\n";
    }
    ~Derived(){
        cout<<"\nDerived Destructor Called...\n";
    }
};

int main(){
    Base* ptr_base;
    Derived ob_derived;
    
    // ptr_base = & ob_derived;

    return 0;
}