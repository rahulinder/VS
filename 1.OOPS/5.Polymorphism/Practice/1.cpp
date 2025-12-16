#include<iostream>
using namespace std;

class Base{
    int a = 0;
    int b = 0;
    public:
    // virtual void show() = 0;
    Base(){
        cout<<"Base Constructor Called..."<<endl;
    }
    virtual void show(){
        cout<<"\nBase show() called\n";
    }
};

class Derived1 : public Base{
    int f = 0;
    int g = 0;
    public:
    Derived1(int x, int y){
        f = x;
        g = y;
    }
    void show(){
        cout<<"Derived 1 Constructor Called...\nDerived-1 :\n"
        <<"f = "<<f<<"\tg = "<<g<<endl<<endl;
    }
};

class Derived2 : public Base{
    int k = 0;
    int l = 0;
    public:
    Derived2(int x, int y){
        k = x;
        l = y;
    }
    void show(){
        cout<<"Derived 2 Constructor Called...\nDerived-2 :\n"
        <<"k = "<<k<<"\tl = "<<l<<endl<<endl;
    }
};

class Derived3 : public Base{
    int p = 0;
    int q = 0;
    public:
    Derived3(int x, int y){
        p = x;
        q = y;
    }
    void show(){
        cout<<"Derived 3 Constructor Called...\nDerived-3 :\n"
        <<"p = "<<p<<"\tq = "<<q<<endl<<endl;
    }   
};

int main(){
    Base *p1, *p2, *p3;
    Derived1 ob1(10, 20);    
    p1 = &ob1;
    Derived2 ob2(30, 40);    
    p2 = &ob2;
    Derived3 ob3(50, 60); 
    p3 = &ob3;

    p1->show();
    p2->show();
    p3->show();
    
    // ob1.show();
    // ob2.show();
    // ob3.show();



    return 0;
}