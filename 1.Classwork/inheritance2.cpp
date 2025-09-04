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
    public:
    void show(){
        //a=10;
        b=20;
        c=30;
        cout<<endl<<b<<endl<<c;
        // cout<<a<<endl<<b<<endl<<c;
    }
};

int main(){
    

return 0;
}