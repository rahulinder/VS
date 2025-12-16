#include<iostream>
using namespace std;

template<class T>
class A{
    T a;
    public:
    A(T x){
        a = x;
    }
    void display(){
        cout<<a/2;
    }
};

int main(){
    A <int>ob(10);
    ob.display();

    return 0;
}