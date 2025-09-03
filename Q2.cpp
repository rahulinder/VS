#include<iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;

    public:

    rectangle(){
        length=0;
        breadth = 0;

        int area;
        area = length*breadth;
        cout<<area<<endl;
    }
    
    rectangle(int l , int b){
        length = l;
        breadth = b;

        int area;
        area = length*breadth;
        cout<<area<<endl;
    }
    
    rectangle(int l){
        length = l;
        breadth = l;

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
    cin.ignore();
    for(int i=0;i<1;i++){
        val[i] = rectangle(2,10);        
          
        val[i] = rectangle(5);
                
        val[i] = rectangle();

    }

    return 0;

}