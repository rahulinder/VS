/*
Constructors are special member functions having same 
name of that class without any return type & they are 
called whenever an object is created.

Characteristics of constructors:
-It doesn't have any return type
-It should be declared in public part of class
-Default cosntructors does not take any parameters
-It automatically runs whenever an object is invoked
-It can have default arguments
-We cannot refer to there addresses

*/

#include<iostream>
using namespace std;

class number{
    int a;
    int b;

    public:
    number(/*void*/);
    void print(){
        cout<<"The value of a and b are : "<<a<<" & "<<b;
    }
};

number::number(/*void*/){ //-----This is a default constructor, it does not take any parameter.
    a=10; //default arguments
    b=20;
}

int main(){
    number n;

    n.print();


return 0;
}