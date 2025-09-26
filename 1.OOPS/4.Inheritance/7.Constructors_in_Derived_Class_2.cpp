#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
    Base1(){
        data1 = 100;
        cout<<"Base1 constructor called..."<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(){
        data2 = 200;
        cout<<"Base2 constructor called..."<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
//constructor will be called according to the order of class declared here
    int data3;
    public:
    Derived(){
    /*changing the order of passing value won't change the 
      order of calling costructor                       */
        data3 = 300;
        cout<<"Derived constructor called..."<<data3<<endl;
    }
};

int main(){
    cout<<"----------OB1----------"<<endl;

    Derived ob1;

return 0;
}