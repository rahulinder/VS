#include<iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;

    public:

    rectangle(){
        length=0;
        breadth = 0;
    }
    
    rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    
    rectangle(int l){
        length = l;
        breadth = l;
    }
    
    int area(){
        int area;
        area = length*breadth;

        cout<<area<<endl;
    }
};

int main(){

    // int length,breadth;
    // cout<<"Enter length and breadth : ";
    // cin>>length>>breadth;

    rectangle val1(5,10), val2(5), val3;//implicit call

    // val1 = rectangle (5,10);//exlicit call
    // val2 = rectangle (length);

    val1.area();
    val2.area();
    val3.area();

    return 0;

}