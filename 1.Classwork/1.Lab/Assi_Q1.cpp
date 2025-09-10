#include<iostream>
using namespace std;

class A{
    int x,y;
    public:
    void setval(int x1, int y1){
        x = x1;
        y = y1;
    }    
    int sum(A &o1, A &o2){
        x = o1.x + o2.x;
        y = o1.y + o2.y;
        return x+y;
    }
};

int main(){
    A ob1, ob2,ob3;
    ob1.setval(4,8);
    ob2.setval(3,6);

    ob3.sum(ob1, ob2);


return 0;
}