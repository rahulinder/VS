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

    const int n = 3;
    rectangle r[n];

    for(int i=0;i<1;i++){
        r[i] = rectangle(l,b);
        r[i+1] = rectangle(l);
        r[i+2] = rectangle();
    }

return 0;
}