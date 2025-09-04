#include<iostream>
using namespace std;

class B{//base class
    int a;
        protected:
        int b;
            public:
            int c; // c is in protected scope
};

class D:public B{//derived class
    public://acces specifier public
    void show(){
        //a=10;
        b=20;
        c=30;
        cout<<endl<<b<<endl<<c;
        // cout<<a<<endl<<b<<endl<<c; // a won't work
    }
};

int main(){
    D ob1;
    ob1.show();    
    //ob1.c=30;// c is in protected scope
return 0;
}

//protected way