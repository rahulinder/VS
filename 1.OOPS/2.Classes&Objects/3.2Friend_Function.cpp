#include<iostream>
using namespace std;

class Y ;

class X{
    int data;
    friend int sum(X x1, Y y1);
    public:
    void setvalue(int value){
        data=value;
    }    
};

class Y{
    int num;
    friend int sum(X x1, Y y1);
    public:
    void setdata(int value){
        num=value;
    }
};

int sum(X x1, Y y1){
    return(x1.data+y1.num);
}

int main(){
    X a1;
    a1.setvalue(10);

    Y b1;
    b1.setdata(20);

    sum(a1 ,b1);

return 0;
}