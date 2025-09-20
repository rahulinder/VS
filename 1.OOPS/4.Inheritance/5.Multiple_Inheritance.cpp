#include<iostream>
using namespace std;

class Base1{
    protected:
    int b1_data;
    public:
    void set_b1(int d){
        b1_data = d;
    }

    int get_b1(){
        return b1_data;
    }
};

class Base2{
    protected:
    int b2_data;
    public:
    void set_b2(int d){
        b2_data = d;
    }

    int get_b2(){
        return b2_data;
    }
};

class Derived : public Base1, public Base2{
    public:
    void display(){
        cout<<"Data in Base1 : "<<get_b1()/*b1_data*/<<endl
            <<"Data in Base2 : "<<get_b2()/*b2_data*/<<endl;            
    }
};

int main(){
    Derived d1;

    d1.set_b1(10);
    d1.set_b2(20);

    d1.display();
return 0;
}