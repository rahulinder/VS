#include<iostream>
using namespace std;

class rectangle{
    int length=0;
    int breadth=0;

    public:

    rectangle(){
        cout<<"Constructor Called : ";
        int area;
        area = length*breadth;
        cout<<area<<endl;
    }
    
    rectangle(int l , int b){
        length = l;
        breadth = b;
        cout<<"Constructor Called : ";
        int area;
        area = length*breadth;
        cout<<area<<endl;
    }
    
    rectangle(int l){
        length = l;
        breadth = l;
        cout<<"Constructor Called : ";
        int area;
        area = length*breadth;
        cout<<area<<endl;
    }

    ~rectangle(){
        cout<<endl;
        cout<<"----------Destructor called----------"<<endl;
        cout<<length<<"  "<<breadth<<endl;
        cout<<endl;
    }
};

int main(){

    // int length,breadth;
    // cout<<"Enter length and breadth : ";
    // cin>>length>>breadth;

    rectangle val[3];
    for(int i=0;i<1;i++){
        val[i] = rectangle(2,10);        
        val[i] = rectangle(5);                
        val[i] = rectangle();
    }

    return 0;

}