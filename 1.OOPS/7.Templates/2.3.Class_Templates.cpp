//Declaring template function outside the class
#include<iostream>
using namespace std;
template<class T1, class T2>
class A{
    T1 a;
    T2 b;
    public:
    A(T1 p){
        a = p;
    }
    void set(T2 q);
    void show();
};

template<class T1, class T2>
void A <T1, T2> :: set(T2 q){
    b = q;
}

template<class T1, class T2>
void A <T1, T2> :: show(){
    cout<<"a = "<<a<<";  b = "<<b<<endl;
}

int main(){
    A <int, double> ob1(10);
    ob1.set(10.5);
    ob1.show();
    
    A <int, double> ob2(20);
    ob2.set(20.5);
    ob2.show();
    
    A <int, double> ob3(30);
    ob3.set(30.5);
    ob3.show();



    return 0;
}