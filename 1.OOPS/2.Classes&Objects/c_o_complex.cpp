#include<iostream>
using namespace std;

class complex{
    int a ;
    int b ;

    public:

    void setdata(int a1, int b1){
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

    int x1,x2;
    int y1,y2;

    cout<<"Enter the values of x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the values of x2 and y2 : ";
    cin>>x2>>y2;

    complex data1, data2,data3;
    
    data1.setdata(x1,y1);
    data1.display();

    data2.setdata(x2,y2);
    data2.display();
    
    cout<<endl;
    
    data3.datasum(data1,data2);
    data3.display();

return 0;
}
