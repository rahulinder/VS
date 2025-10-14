/*
A Virtual function is use to call the member function of the class whose object is 
stored in the pointer to object of the inherieted class of inheriting class
*/
#include<iostream>
using namespace std;

class Base{
    public:
    int base_var = 123;

    virtual void show(){
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
    Base* ptr_base;
    Derived ob_derived;

    ptr_base = &ob_derived;// ptr_base points to the address of the object ob_derived 

    // *ptr_base = ob_derived;// this is incorrect initialization because 
    //   here *ptr_base is pointing to the value of the ob_derived not the address.

    ob_derived.show();// It will call show() of Derived class

    ptr_base->show();// It will call show() of Base class
    /*  'ptr_base->show(); ' is indirectly same as 'ob_derived.show(); ' 
          but 'ptr_base->show(); ' due to its default behaviour calls the 'show() ' of base class
          this is resolved by virtual function
    */

    return 0;
}