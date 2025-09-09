#include<iostream>
using namespace std;

class A{
    int x; 
    int y;

    public:
    void setval(int val_x){
        x = val_x;
    }
    int sum(A ob1, A ob2){
       x=x + ob1.x;
        return x;
    }
    void display(){

    }
};

int main(){
    A ob1 , ob2,ob_sum;
    ob1.setval(4);
    ob2.setval(8);

    ob_sum.sum(ob1,ob2);
    ob_sum.display();

    return 0;
}