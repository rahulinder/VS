#include <iostream>
using namespace std;

class Base {
public:
    // virtual void show() {
    void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    // void show() override {
    void show(){    
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* base_ptr;
    Derived derived_obj;

    base_ptr = &derived_obj;
    base_ptr->show();    // Calls the show() function of the Derived class

    return 0;
}