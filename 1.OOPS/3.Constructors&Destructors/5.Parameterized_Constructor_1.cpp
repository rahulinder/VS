#include<iostream>
using namespace std;

class number{
    int a;
    int b;

    public:
    number(int ,int);
    void print(){
        cout<<endl;
        cout<<"The value of a and b are : "<<a<<" & "<<b;
    }
};

number::number(int x, int y){ 
    a=x; 
    b=y;
}

int main(){
    int x1,x2;
    int y1,y2;

    cout<<"Enter the value of x1 & y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the value of x2 & y2 : ";
    cin>>x2>>y2;

    //implicit call
    number n1(x1,y1);
    n1.print();

    number n2 = number (x2, y2);
    n2.print();
    
    return 0;
}