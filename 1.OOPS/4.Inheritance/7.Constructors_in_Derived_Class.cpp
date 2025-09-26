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
    ~Base1(){
    cout<<"Base1 Constructor called..."<<endl;
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
    ~Base2(){
        cout<<"Base2 Constructor called..."<<endl;
    }
};

class Derived : public Base1, public Base2{
    //constructor will be called according to the order of class declared here
    int data3;
    public:
    Derived(){}
    Derived(int b1, int b2, int d1) :  Base2(b2), Base1(b1), data3(d1){//Initilalization list in Constructor data3(d1) is direcotrly initialized
    // Derived(int b1, int b2, int d1) :  Base2(b2), Base1(b1){
    /*changing the order of passing value won't change the 
      order of calling costructor                       */
        // data3 = d1;
        cout<<"Derived constructor called..."<<data3<<endl;
    }
    ~Derived(){
        cout<<endl<<"Derived Destructor called..."<<endl;
    }
};

int main(){
    Derived ob(100, 200, 300);
    
return 0;
}
/*
Destructor are called in the reverse order of Constructor
*/