//Single Class Inheritance in PUBLIC scope
#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base :: setdata(){
    data1 = 100;
    data2 = 200;
}

int Base :: getdata1(){
    return data1;
}

int Base :: getdata2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};

void Derived :: process(){
    data3 = data2 + getdata1();
    // data3 = data2 + data1; //this cannot access the value of data1 because it is in
    // the PRIVATE scope of base class, so we access its value from public member function 
    // 'getdata1()' of public scope of base class.
}

void Derived :: display(){
    cout<<"Value of data1 : "<<getdata1()<<endl;// same reason as above
    cout<<"Value of data2 : "<<data2<<endl;// value is accessible because data2 is in public scope of base class
    cout<<"Value of data3 : "<<data3<<endl;// data3 is in the scope of derived class 

}

int main(){
    Derived d1;
    d1.setdata(); //we can call 'setdata()' because it is in the public scope of base class
    // and derived class is inheriting properties of base class

    d1.process();
    d1.display();

return 0;
}