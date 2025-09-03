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

    rectangle val[3];
    for(int i=0;i<2;i++){
        val[i] = rectangle(2,10);        
          
        
        val[i] = rectangle(5);
        val[i].area();
        
        val[i];
        val[i].area();
    }

    return 0;

}