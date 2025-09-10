#include<iostream>
using namespace std;

class rectangle{
    int l;
    int b;
    public:
    rectangle(){
        l = 0;
        b = 0;
    }
    rectangle(int val){
        l = val;
        b = val;
    }
    rectangle(int val1, int val2){
        l = val1;
        b = val2;
    }
    void area(){
        int area;
        area = l * b;
        cout<<area<<endl;
    }
};

int main(){
    int l, b;
    cout<<"Enter the Length & Breadth : "; 
    cin>>l >> b;

    rectangle r1,r2(l),r3(l,b);

    r1.area();
    r2.area();
    r3.area();
    

return 0;
}