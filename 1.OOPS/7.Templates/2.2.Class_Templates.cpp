#include<iostream>
using namespace std;

template<class T1, class T2>
class C{
    T1 a;
    T2 b;
    public:
    C(T1 m, T2 n){
        a = m;
        b = n;
    }
    void show(){
        cout<<"a = "<<a<<";  b = "<<b<<endl;
    }
};

int main(){
    C <int, double> ob1(10, 10.5), ob2(20, 20.5);
    C <float, string> ob3(30, "Hello");
    C <char, float> ob4('A', 2.5);

    ob1.show();
    ob2.show();
    ob3.show();
    ob4.show();

    return 0;
} 