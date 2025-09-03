#include<iostream>
using namespace std;

class A{
    int i=10;
    //friend class B;
    void display(){
        cout<<i;
    }
};

class B{
    public:
    void output(A ob){
        //ob.i=5;
        //ob.display();
    //}
    // void show(A a){
    //     cout<<"i="<<a.i<<endl;
    }
};

int main(){
    A a;
    B b;
    b.output(a);

return 0;
}