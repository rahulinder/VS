#include<iostream>
using namespace std;

class test{

    int a=5 , b=10;
    public:
    friend int sum(test& obj);
    
};

int sum(test& obj){
    int c;
    c= obj.a+ obj.b;

    return c;
}

int main(){
    test num;

    int result;
    result=sum(num);
    
return 0;
}