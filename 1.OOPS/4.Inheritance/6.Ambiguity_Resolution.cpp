#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"Hello From Base1"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Hello From Base2"<<endl;
    }    
};

class Derived : public Base1, public Base2{
    public:
    void greet(){ //ambiguity resolved with scope resolution
        Base1 :: greet();

        Base2 :: greet();
    }
};

int main(){
    Derived d1;

    d1.greet();

return 0;
}