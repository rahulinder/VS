/*
If a derived class's object is destroyed by deleting its storage via the base class pointer
and the class a non-virtual destructor. Then the behaviour is undefined

It ensures that the derived class destructor is called when a base class pointer is used 
while deleting a dynamically created derived class object.
*/
#include<iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"\nBase Destructor Called...";
    }
};

class Derived1 : public Base{
    public:
    ~Derived1(){
        cout<<"\nDerived1 Destructor Called...";
    }
};

class Derived2 : public Base{
    public:
    ~Derived2(){
        cout<<"\nDerived2 Destructor Called...";
    }
};

class Derived3 : public Base{
    public:
    ~Derived3(){
        cout<<"\nDerived3 Destructor Called...";
    }
};

int main(){
    Base* p1 = new Base();    
    Base* p2 = new Derived1();    
    Base* p3 = new Derived2();    
    Base* p4 = new Derived3();
    cout<<"\nObjects Created using Dynamic Memory Allocation...\n"; 
    
    cout<<"\n\nDeleting p1, p2, p3, p4\n";
    delete(p1);
    delete(p2);
    delete(p3);
    delete(p4);

    cout<<endl;

    /*
    Without Virtual Destructor :

    Base Destructor Called...
    Base Destructor Called...
    Base Destructor Called...
    Base Destructor Called...

    ————————————————————————

    With Virtual Destructor :

    Base Destructor Called...
    Derived1 Destructor Called...
    Base Destructor Called...
    Derived2 Destructor Called...
    Base Destructor Called...
    Derived3 Destructor Called...
    Base Destructor Called...
*/

    return 0;
}