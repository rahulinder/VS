#include<iostream>
using namespace std;
/*
CASE 1:
class B : public A{}; constructor of base will be called first

CASE 2: (Multiple Inheritance)
class A : public C, public B{}; constructor of class C will be called first
beacuse it is written before class B

*/
class Base1{
    int data1;
    public:
    Base1(){}
    Base1(int b1){
        data1 = b1;
        cout<<"Base1 constructor called..."<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(){}
    Base2(int b2){
        data2 = b2;
        cout<<"Base2 constructor called..."<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    int data3;
    public:
    Derived(){}
    Derived(int b1, int b2, int d1) : Base1(b1), Base2(b2){
        data3 = d1;
        cout<<"Derived constructor called..."<<data3<<endl;
    }
};

int main(){
    cout<<"----------OB1----------"<<endl;

    Derived ob(100, 200, 300), ob2;
    
    cout<<endl<<"----------OB2----------"<<endl;

    ob2 = Derived(400, 500, 600);

return 0;
}