#include<iostream>
using namespace std;

class Base1{
    int a1;
    int b1;
    public:
    Base1(int A = 0, int B = 0){
        cout<<"—Base 1 Constructor Called...";
        a1 = A;
        b1 = B;
    }
    void show(){
        cout<<"Base 1:\na1 = "<<a1<<"\tb1 = "<<b1<<endl<<endl;
    }
    ~Base1(){
        cout<<"——Base 1 Destructor Called...\n";
    }
};
class Base2{
    int a2;
    int b2;
    public:
    Base2(int A = 0, int B = 0){
        cout<<"—Base 2 Constructor Called...";
        a2 = A;
        b2 = B;
    }
    void show(){
        cout<<"Base 2:\na2 = "<<a2<<"\tb2 = "<<b2<<endl<<endl;
    }
    ~Base2(){
        cout<<"——Base 2 Destructor Called...\n";
    }
};
class Base3{
    int a3;
    int b3;
    protected:
    float c3;
    float d3;
    public:
    Base3(int A = 0, int B = 0){
        cout<<"—Base 3 Constructor Called...";
        a3 = A;
        b3 = B;
        c3 = A/2;
        d3 = B/2;
    }
    void show(){
        cout<<"Base 3:\na3 = "<<a3<<"\tb3 = "<<b3<<endl<<endl;
    }
    ~Base3(){
        cout<<"——Base 3 Destructor Called...\n";
    }
};

class Derived1 : public Base1{
    int p1;
    int q1;
    public:
    Derived1(){}
    Derived1(int P, int Q){
        cout<<"\n—Derived 1 Constructor Called...\n\n";
        p1 = P;
        q1 = Q;
    }
    void show(){
        cout<<"Derived-1 :\np1 = "<<p1<<"\tq1 = "<<q1<<endl<<endl;
    }
    ~Derived1(){
        cout<<"\n\n——Derived 1 Destructor Called...\n";
    }    
};

class Derived2 : public Base2{
    int p2;
    int q2;
    public:
    Derived2(){}
    Derived2(int P, int Q){
        cout<<"\n—Derived 2 Constructor Called...\n\n";
        p2 = P;
        q2 = Q;
    }
    void show(){
        cout<<"Derived-2 :\np2 = "<<p2<<"\tq2 = "<<q2<<endl<<endl;
    }    
    ~Derived2(){
        cout<<"\n\n——Derived 2 Destructor Called...\n";
    }    
};

class Derived3 : protected Base3{
    int p3;
    int q3;
    public:
    Derived3(){}
    Derived3(int P, int Q, int C, int D) : Base3(C, D){
        cout<<"\n—Derived 3 Constructor Called...\n\n";
        p3 = P;
        q3 = Q;
    }
    void show(){
        cout<<"Derived-3 :\np3 = "<<p3<<"\tq3 = "<<q3<<endl<<endl;
        cout<<"Protected Base 3:\nc = "<<c3<<"d = "<<d3;
    }
    ~Derived3(){
        cout<<"\n\n——Derived 3 Destructor Called...\n";
    }    
};

int main(){
    cout<<"Creating Object of Derived-1 Class\n";
    Derived1 ob1(10, 20);
    
    cout<<"Creating Object of Derived-2 Class\n";
    Derived2 ob2(30, 40);

    cout<<"Creating Object of Derived-3 Class\n";
    Derived3 ob3(50, 60, 55, 65);

    ob1.show();
    ob2.show();
    ob3.show();

    
    
    return 0;
}