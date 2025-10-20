/*
A Pure Virtual Function is declared without body with value = 0.

Abstract Base class is created as we declare atleast one Pure Virtual Function.
-It can be inherited by other Derived Classes
-We cannot make objects of this class but can make pointer to object
-It can have normal functions and variables along with a pure virtual function
-If we want to create object of Derived Class then we MUST declare the 
same function with body. If we do not make the fucntion compiler will 
automatically make that Derived Class an Abstract class. 
                                                or
-Classes inheriting an Abstract Class must provide definition to the 
pure virtual function, otherwise they will also become abstract class.
*/
#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() = 0;//pure virtual function
};

class Derived1 : public Base{
    public:
    // void show(){
    // cout<<"\nDerived Class 1 Called...";    
    // }
};

class Derived2 : public Base{
    public:
    void show(){
    cout<<"\nDerived Class 2 Called...";    
    }
};

int main(){
    // Base* ptr1_base = new Derived1();
    Base* ptr2_base = new Derived2();

    cout<<"\nObjects Created...\n\n";

    // ptr1_base->show();
    ptr2_base->show();

    cout<<"\n\nDeleting objects\n";
    // delete(ptr1_base);
    delete(ptr2_base);

    return 0;
}