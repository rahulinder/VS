#include<iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;

    public:

    rectangle(){}
    
    rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    
    rectangle(int l){
        length = l;
        breadth = 5;
    }
    
    int area(){
        int area;
        area = length*breadth;

        cout<<area<<endl;
    }
};

int main(){

    int length,breadth;
    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;

    rectangle val1, val2;
    val1 = rectangle (length,10);
    val2 = rectangle (length);

    val1.area();
    val2.area();

    return 0;

}