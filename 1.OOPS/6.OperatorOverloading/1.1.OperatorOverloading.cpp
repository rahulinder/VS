/*
Operator Overloading :
-You can only overload existing operators
-You cannot change the precedence or arity
-You cannot redefine an already defined operator
-There operators cannot be overloaded
    .  (Member Access)
    :: (Scope resolution)
    ?: (Ternary Conditional)  
    sizeof
*/
#include<iostream>
using namespace std;

class A{
    int a, b;
    int c, d;
    public:
    A(int x = 0, int y = 0, int p = 0, int q = 0){
        a = x;        b = y;
        c = p;        d = q;
    }

    A operator ^(A second){
        A third;
        third.a = this->a + second.a;
        third.b = this->b + second.b;
        return third;
    }

    A operator %(A second){
        A third;

    }

    void display(){
        cout<<"a = "<<a<<"\nb = "<<b<<endl;    
    }
};

int main(){
    A ob1(5, 10);
    ob1.display();
    cout<<endl;
    
    A ob2 = A(3, 9);
    ob2.display();
    cout<<endl;
    
    A ob3 = ob1 ^ ob2;   
    ob3.display();
    cout<<endl;

    return 0;
}