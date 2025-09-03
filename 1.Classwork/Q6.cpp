#include<iostream>
using namespace std;

class complex{
    int a ;
    int b ;

    public:

    void complex::setdata(int a1, int b1){
        a=a1;
        b=b1;
    }

    void datasum(complex ob1, complex ob2){
        a=ob1.a+ob2.a;
        b=ob1.b+ob2.b;
    }

    void display(){
        cout<<"Values of 'a' and 'b' are "<<a<<" and "<<b<<endl;
    }
};

int main(){

    int x;
    int y;

    cout<<"Enter the values of x and y";
    cin>>x>>y;

    complex data1, data2,data3;
    
    data1.setdata(x,y);
    data1.display();

    data2.setdata(x,y);
    data2.display();
    
    data3.datasum(data1,data2);
    data3.display();
    
return 0;
}
