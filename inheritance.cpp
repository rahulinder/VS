#include<iostream>
using namespace std;

class A{//base class
    int x;    

    protected:
    int y;// can be accessed in class B but not outside the class B.
    
    public:
    int z;
};

class B : public A {// derived class
    public:
    void output(){
        //x=12;
        y=20;
        z=30;

        cout<<y<<endl<<z;
    }
};

int main(){
    B ob;
    //ob.y=90;//cannot use y in main's scope 
    ob.output();
return 0;
}