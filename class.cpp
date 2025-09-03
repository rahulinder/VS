#include<iostream>
using namespace std;

class A{
    public:
    void f(){
        static A ob; //A ob;
    }
    ~A(){
        cout<<"DEs"<<endl;
    }
};

int main(){
    A obj;
    obj.f();
    cout<<"hi\n";
return 0;
}