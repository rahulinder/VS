#include<iostream>
using namespace std;

class A{
    int x; 
    int y;

    public:
    void setval(int val_x){
        x = val_x;
    }
    int sum(A ob1){
       x=x + ob1.x;
        return x;
    }
    void display(){

    }
};

int main(){
    A ob1 , ob2 ;
    ob1.setval(4);
    ob2.setval(8);

    ob2.sum(ob1);


    return 0;
}