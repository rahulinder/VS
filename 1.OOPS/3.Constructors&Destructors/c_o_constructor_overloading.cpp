#include<iostream>
using namespace std;

class point{
    int x;
    int y;

    public:
    
    point(){
        x=0;
        y=0;
    }

    point(int x1){
        x=x1;
        y=0;
    }

    point(int x1, int y1){
        x=x1;
        y=y1;
    }

    void display(){
        cout<<"The values of x and y are : "<<x<<"\t"<<y<<endl;
    }
    
};

int main(){
    point ob1(5, 6);
    ob1.display();

    point ob2;
    ob2.display();

    point ob3(2);
    ob3.display();

return 0;
}