#include<iostream>
using namespace std;

class B{//base class
    int a;
        protected:
        int b;
            public:
            int c;
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

return 0;
}

//