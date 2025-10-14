#include<iostream>
using namespace std;

class number{
    int num;

    public:
    number(){
    }
    
    number(int a){
        num=a;
    }
    
    number(number &object){
        object.num=300;
        num=object.num;        
        cout<<"Copy Const. called "<<num<<endl;
    }

    void display(){
        cout<<"Non-Copy Const. called, value = "<<num<<endl;
    }
    
};

int main(){
    number ob1, ob2, ob3, ob4;

    ob1=number(3);
    ob1.display();
    
    ob2=number(2);
    ob2.display();
    
    ob3=number(1);
    ob3.display();

    number ob5(ob2);

    ob4 = number(ob1);

return 0;
}