#include<iostream>
using namespace std;

template<class T>
class A{
    T a, b;
    public:
    A(T c, T d){
        a = c;
        b = d;
    }
    void show(){
        cout<<"a = "<<a<<";  b = "<<b<<endl;
    }
};

template<class T>
class B{
    T f, g;
    public:
    B(T h, T i){
        f = h;
        g = i;
    }
    void show(){
        cout<<"f = "<<f<<";  g = "<<g<<endl;
    }
};

template<class T1, class T2>
class C{
    T1 k;
    T2 l;
    public:
    C(T1 m, T2 n){
        k = m;
        l = n;
    }
    void show(){
        cout<<"k = "<<k<<";  l = "<<l<<endl;
    }
};

template<class T1, class T2>
class D{
    T1 p;
    T2 q;
    public:
    D(T1 r){
        p = r;
    }
    void set(T2 s){
        q = s;
    }
    void show(){
        cout<<"p = "<<p<<";  q = "<<q<<endl;
    }
};


int main(){
    A <double> ob1 (10, 15.5);//<double> defines the datatype of variables of the template's class T
    ob1.show();

    B <char> ob2 ('A', 'B');
    ob2.show();

    C <int, char> ob3 (10, 'L');
    ob3.show();

    D <char, double> ob4 ('P');
    ob4.set(34.56);
    ob4.show();

    return 0;
 