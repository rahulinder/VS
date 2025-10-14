#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int sum(complex o1,complex o2);
    
};

class complex{
    int a;
    int b;
    friend int calculator::sum(complex , complex);

    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }

    void print(){
        cout<<"value of a is "<<a<<" and value of b is "<<b;
    }
};

int calculator::sum(complex ob1,complex ob2){
        return ob1.a + ob2.a;
    }

int main(){
    complex num1, num2;
    num1.setnumber(3,4);
    num2.setnumber(2,5);

    calculator a;
    int result=a.sum(num1,num2);

    cout<<"result"<<result;

return 0;
}